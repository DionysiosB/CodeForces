#include <cstdio>
#include <vector>
typedef long long ll;

//Segment Tree, RST

struct segtree{
    long sz; std::vector<std::pair<ll, ll> > f;

    void init(ll num){
        const ll MAX = 1e17;
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, std::make_pair(MAX, 1LL));
    }

    void set(long idx, ll val){set(idx, val, 0, 0, sz);}
    void set(long idx, ll val, long node, long lv, long rv){
        //printf("idx:%ld val:%lld node:%ld lv:%ld rv:%ld\n", idx, val, node, lv, rv);
        if(rv == lv + 1){f[node] = std::make_pair(val, 1); return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}

        if(f[2 * node + 1].first < f[2 * node + 2].first){f[node] = f[2 * node + 1];}
        else if(f[2 * node + 1].first > f[2 * node + 2].first){f[node] = f[2 * node + 2];}
        else if(f[2 * node + 1].first == f[2 * node + 2].first){f[node] = std::make_pair(f[2 * node + 1].first, f[2*node + 1].second + f[2*node + 2].second);}
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld:(%lld, %lld)\n",p, f[p].first, f[p].second);}
        puts("===================");
        return;
    }

    std::pair<ll, ll> getMin(long lq, long rq){return getMin(lq, rq, 0, 0, sz);}
    std::pair<ll, ll> getMin(long lq, long rq, long node, long lv, long rv){
        const ll MAX = 1e17;
        if(rq <= lv || rv <= lq){return std::make_pair(MAX, 1LL);}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            long mid = (lv + rv) / 2;
            std::pair<ll, ll> leftMin = getMin(lq, rq, 2 * node + 1, lv, mid);
            std::pair<ll, ll> rightMin = getMin(lq, rq, 2 * node + 2, mid, rv);

            if(leftMin.first < rightMin.first){return leftMin;}
            else if(leftMin.first > rightMin.first){return rightMin;}
            else if(leftMin.first == rightMin.first){return std::make_pair(leftMin.first, leftMin.second + rightMin.second);}
        }

        return std::make_pair(MAX, 1LL);
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
        else if(op == 2){
            std::pair<ll, ll> res = st.getMin(x, y);
            printf("%lld %lld\n", res.first, res.second);}
    }

    return 0;
}
