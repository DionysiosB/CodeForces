#include <cstdio>
#include <vector>
typedef long long ll;

ll llmax(ll x, ll y){return (x > y) ? x : y;}

struct segtree{
    long sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(long idx, ll val){set(idx, val, 0, 0, sz);}
    void set(long idx, ll val, long node, long lv, long rv){
        if(rv == lv + 1){f[node] = val; return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = llmax(f[2 * node + 1], f[2 * node + 2]);
    }

    long findMinIndex(ll x){
        if(f[0] < x){return -1;}
        return findMinIndex(x, 0, 0, sz);
    }
    long findMinIndex(ll val, long node, long lv, long rv){
        if(f[node] < val){return -1;}
        else if(rv == lv + 1 && f[node] >= val){return lv;}
        else if(f[2 * node + 1] >= val){return findMinIndex(val, 2*node + 1, lv, (lv + rv) / 2);}
        else if(f[2 * node + 2] >= val){return findMinIndex(val, 2 * node + 2, (lv + rv) / 2, rv);}
        return -1;
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld: %lld\n", p, f[p]);}
        puts("===================");
        return;
    }
};


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    segtree st; st.init(n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); st.set(p, x);}
    //st.print();

    while(m--){
        int op; scanf("%d", &op);
        if(op == 1){
            ll w, value; scanf("%lld %lld", &w, &value);
            st.set(w, value);
            //st.print();
        }
        else if(op == 2){
            ll x; scanf("%lld", &x);
            printf("%ld\n", st.findMinIndex(x));
        }
    }

    return 0;
}
