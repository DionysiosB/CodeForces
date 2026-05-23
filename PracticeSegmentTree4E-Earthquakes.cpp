#include <cstdio>
#include <vector>
typedef long long ll;

struct data{
    ll mn, mx, cnt;
    void reset(){mn = 100; mx = 0LL; cnt = 0;}
};

struct segtree{
    ll sz; std::vector<data> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        data init; init.reset();
        f.assign(2 * sz, init);
    }

    void set(ll idx, ll val){set(idx, val, 0, 0, sz);}
    void set(ll idx, ll val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node].mn = f[node].mx = val; f[node].cnt = 1; return;}
        if(f[node].cnt == 0){data cur; cur.reset(); f[2*node + 1] = f[2*node+2] = cur;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node].mn = (f[2 * node + 1].mn < f[2 * node + 2].mn) ? f[2 * node + 1].mn : f[2 * node + 2].mn;
        f[node].mx = (f[2 * node + 1].mx > f[2 * node + 2].mx) ? f[2 * node + 1].mx : f[2 * node + 2].mx;
        f[node].cnt = f[2 * node + 1].cnt + f[2 * node + 2].cnt;
    }

    ll getRem(ll lq, ll rq, ll val){return getRem(lq, rq, val, 0, 0, sz);}
    ll getRem(ll lq, ll rq, ll val, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){return 0LL;}
        else if(lq <= lv && rv <= rq && f[node].mn > val){return 0LL;}
        else{
            ll ret(0LL);
            if(lq <= lv && rv <= rq && f[node].mx <= val){ret = f[node].cnt; f[node].reset();}
            else{
                ll mid = (lv + rv) / 2;
                ll leftRem = getRem(lq, rq, val, 2 * node + 1, lv, mid);
                ll rightRem = getRem(lq, rq, val, 2 * node + 2, mid, rv);
                ret =(leftRem + rightRem);
            }

            if(f[node].cnt){
                f[node].mn = (f[2 * node + 1].mn < f[2 * node + 2].mn) ? f[2 * node + 1].mn : f[2 * node + 2].mn;
                f[node].mx = (f[2 * node + 1].mx > f[2 * node + 2].mx) ? f[2 * node + 1].mx : f[2 * node + 2].mx;
                f[node].cnt = f[2 * node + 1].cnt + f[2 * node + 2].cnt;
            }

            return ret;
        }

        return 0LL;
    }
};


int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    segtree st; st.init(n);

    while(m--){
        int op; scanf("%d", &op);
        if(op == 1){
            ll x, y; scanf("%lld %lld", &x, &y);
            st.set(x, y);
        }
        else if(op == 2){
            ll lb, rb, strength; scanf("%lld %lld %lld", &lb, &rb, &strength);
            ll removed = st.getRem(lb, rb, strength);
            printf("%lld\n", removed);
        }
    }

    return 0;
}
