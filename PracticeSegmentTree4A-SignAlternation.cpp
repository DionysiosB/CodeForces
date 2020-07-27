#include <cstdio>
#include <vector>
typedef long long ll;

struct segtree{
    ll sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(ll idx, ll val){set(idx, val, 0, 0, sz);}
    void set(ll idx, ll val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node] = (lv % 2 ? -1 : 1) * val; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    ll getSum(ll lq, ll rq){return (lq % 2 ? -1 : 1) * getSum(lq, rq, 0, 0, sz);}
    ll getSum(ll lq, ll rq, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){return 0LL;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            ll leftSum = getSum(lq, rq, 2 * node + 1, lv, mid);
            ll rightSum = getSum(lq, rq, 2 * node + 2, mid, rv);
            return (leftSum + rightSum);
        }

        return 0LL;
    }
};


int main(){

    ll n; scanf("%lld", &n);
    segtree st; st.init(n);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); st.set(p, x);}

    ll m; scanf("%lld", &m);
    while(m--){
        ll op, x, y; scanf("%lld %lld %lld", &op, &x, &y);
        if(op == 0){st.set(x - 1, y);}
        else if(op == 1){printf("%lld\n", st.getSum(x - 1, y));}
    }

    return 0;
}
