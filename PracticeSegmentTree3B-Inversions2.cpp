#include <cstdio>
#include <vector>
typedef long long ll;

struct segtree{
    ll sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(ll idx){set(idx, 1, 0, 0, sz);}
    void reset(ll idx){set(idx, 0, 0, 0, sz);}

    void set(ll idx, ll val, ll node, ll lv, ll rv){
        //printf("idx:%lld node:%lld lv:%lld rv:%lld\n", idx, node, lv, rv);
        if(rv == lv + 1){f[node] = val; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    ll getIndex(ll inv){return getIndex(inv, 0, 0, sz);}
    ll getIndex(ll inv, ll node, ll lv, ll rv){
        //printf("inv:%lld node:%lld lv:%lld rv:%lld\n", inv, node, lv, rv);
        if(inv < 0 || f[node] < inv){return 0;}
        if(inv == 1 && f[node] == 1 && rv == lv + 1){return lv;}
        if(f[node] >= inv){
            ll mid = (lv + rv)/2;
            if(f[2*node+2] >= inv){return getIndex(inv, 2*node+2, mid, rv);}
            else{return getIndex(inv - f[2*node+2], 2*node+1, lv, mid);}
        }

        return 0;
    }

    void print(){
        puts("\n===================");
        for(ll p = 0; p < 2 * sz; p++){printf("%lld:%lld\n",p, f[p]);}
        puts("\n===================");
        return;
    }
};


int main(){

    ll n; scanf("%lld", &n);
    segtree st; st.init(n + 1);
    for(long p = 1; p <= n; p++){st.set(p);}
    //st.print();

    std::vector<ll> a(n + 1); for(long p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> res;

    for(ll p = n; p > 0; p--){
        ll num = st.getIndex(a[p] + 1);
        res.push_back(num);
        st.reset(num);
        //st.print();
    }

    for(long p = res.size() - 1; p >= 0; p--){printf("%lld ", res[p]);}; puts("");

    return 0;
}
