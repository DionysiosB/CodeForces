#include <cstdio>
#include <vector>
typedef long long ll;

//Segment Tree, RST

struct segtree{
    long sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(long idx, ll val){set(idx, val, 0, 0, sz);}
    void set(long idx, ll val, long node, long lv, long rv){
        //printf("idx:%ld val:%lld node:%ld lv:%ld rv:%ld\n", idx, val, node, lv, rv);
        if(rv == lv + 1){f[node] = val; return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] < f[2 * node + 2] ? f[2 * node + 1] : f[2 * node + 2];
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld:%lld\n",p, f[p]);}
        puts("===================");
        return;
    }

    ll getMin(long lq, long rq){return getMin(lq, rq, 0, 0, sz);}
    ll getMin(long lq, long rq, long node, long lv, long rv){
        const ll MAX = 1e17;
        if(rq <= lv || rv <= lq){return MAX;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            long mid = (lv + rv) / 2;
            ll leftMin = getMin(lq, rq, 2 * node + 1, lv, mid);
            ll rightMin = getMin(lq, rq, 2 * node + 2, mid, rv);
            return (leftMin < rightMin ? leftMin : rightMin);
        }

        return 0LL;
    }
};


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    segtree st; st.init(n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); st.set(p, x);}
    //st.print();

    while(m--){
        long op, x, y; scanf("%ld %ld %ld", &op, &x, &y);
        if(op == 1){st.set(x, y);}
        else if(op == 2){printf("%lld\n", st.getMin(x, y));}
    }

    return 0;
}
