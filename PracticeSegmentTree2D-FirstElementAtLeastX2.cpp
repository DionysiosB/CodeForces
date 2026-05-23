#include <cstdio>
#include <vector>
typedef long long ll;

ll llmax(ll x, ll y){return (x > y) ? x : y;}

struct segtree{
    ll sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(ll idx, ll val){set(idx, val, 0, 0, sz);}
    void set(ll idx, ll val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node] = val; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = llmax(f[2 * node + 1], f[2 * node + 2]);
    }

    ll findMinIndex(ll x, ll y){
        if(f[0] < x){return -1;}
        return findMinIndex(x, y, 0, 0, sz);
    }
    ll findMinIndex(ll val, ll after, ll node, ll lv, ll rv){
        if(rv <= after || f[node] < val){return -1;}
        if(rv > after && rv == lv + 1 && f[node] >= val){return lv;}
        ll mid = (lv + rv) / 2;
        ll left = findMinIndex(val, after, 2*node + 1, lv, mid);
        if(left >= 0){return left;}
        ll right = findMinIndex(val, after, 2*node + 2, mid, rv);
        if(right >= 0){return right;}
        return -1;
    }
};


int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    segtree st; st.init(n);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); st.set(p, x);}

    while(m--){
        ll op, x, y; scanf("%lld %lld %lld ", &op, &x, &y);
        if(op == 1){st.set(x, y);}
        else if(op == 2){printf("%lld\n", st.findMinIndex(x, y));}
    }

    return 0;
}
