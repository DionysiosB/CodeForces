#include <cstdio>
#include <vector>
typedef long long ll;

const int N = 21;

struct data{
    std::vector<ll> cs; ll cnt;
    void init(){cs = std::vector<ll>(N, 0); cnt = 0;}
    void init(ll num){
        cs = std::vector<ll>(N, 0);
        for(ll p = num; p < N; p++){cs[p] = 1;}
        cnt = 0;
    }
};

struct segtree{
    ll sz; std::vector<data> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        data tmp; tmp.init();
        f.assign(2 * sz, tmp);
    }

    data merge(const data &L, const data &R){
        std::vector<ll> vec(N, 0);
        for(ll p = 1; p < N; p++){vec[p] = L.cs[p] + R.cs[p];}
        ll inversions = L.cnt + R.cnt;
        for(ll p = 2; p < N; p++){
            ll diff = L.cs[p] - L.cs[p - 1];
            ll s = R.cs[p - 1];
            inversions += diff * s;
        }

        data ret; ret.cs = vec; ret.cnt = inversions;
        return ret;
    }

    void set(ll idx, ll val){set(idx, val, 0, 0, sz);}
    void set(ll idx, ll val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node].init(val); return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = merge(f[2*node+1], f[2*node+2]);
    }


    data getInv(ll lq, ll rq){return getInv(lq, rq, 0, 0, sz);}
    data getInv(ll lq, ll rq, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){data tmp; tmp.init(); return tmp;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            data left  = getInv(lq, rq, 2 * node + 1, lv, mid);
            data right = getInv(lq, rq, 2 * node + 2, mid, rv);
            return merge(left,right);
        }
    }
};


int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    segtree st; st.init(n + 1);
    for(ll p = 1; p <= n; p++){ll x; scanf("%lld", &x); st.set(p, x);}
    while(q--){
        ll op, x, y; scanf("%lld %lld %lld", &op, &x, &y);
        if(op == 1){data dt = st.getInv(x, y + 1); printf("%lld\n", dt.cnt);}
        else if(op == 2){st.set(x, y);}
    }

    return 0;
}
