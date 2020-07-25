#include <cstdio>
#include <vector>
typedef long long ll;

struct segtree{
    long sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(long idx, ll val){set(idx, val, 0, 0, sz);}
    void set(long idx, ll val, long node, long lv, long rv){
        //printf("idx:%ld val:%lld node:%ld lv:%ld rv:%ld\n", idx, val, node, lv, rv);
        if(rv == lv + 1){f[node] += val; return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    ll getSum(long rq){return getSum(rq, 0, 0, sz);}
    ll getSum(long rq, long node, long lv, long rv){
        if(rq <= lv){return 0LL;}
        else if(rv <= rq){return f[node];}
        else{
            long mid = (lv + rv) / 2;
            ll leftSum = getSum(rq, 2 * node + 1, lv, mid);
            ll rightSum = getSum(rq, 2 * node + 2, mid, rv);
            return (leftSum + rightSum);
        }

        return 0LL;
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld:%lld\n",p, f[p]);}
        puts("===================");
        return;
    }
};

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    segtree st; st.init(n + 1);
    while(m--){
        int op; scanf("%d", &op);
        if(op == 1){
            ll left, right, value; scanf("%lld %lld %lld", &left, &right, &value);
            st.set(left, value);
            st.set(right, -value);
            st.print();
        }
        else if(op == 2){
            ll pos; scanf("%lld", &pos);
            printf("%lld\n", st.getSum(pos + 1));
        }
    }

    return 0;
}
