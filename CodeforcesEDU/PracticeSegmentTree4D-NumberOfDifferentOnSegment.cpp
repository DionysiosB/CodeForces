#include <cstdio>
#include <vector>
typedef long long ll;

const int N = 42;

struct segtree{
    ll sz; std::vector<std::vector<bool> > f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, std::vector<bool>(N, 0));
    }

    std::vector<bool> merge(const std::vector<bool> &a, const std::vector<bool> &b){
        std::vector<bool> out = std::vector<bool>(N, 0);
        for(long p = 0; p < out.size(); p++){out[p] = a[p] | b[p];}
        return out;
    }

    void set(ll idx, ll val){set(idx, val, 0, 0, sz);}
    void set(ll idx, ll val, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node] = std::vector<bool>(N, 0); f[node][val] = 1; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}
        f[node] = merge(f[2 * node + 1] , f[2 * node + 2]);
    }

    std::vector<bool> getCount(ll lq, ll rq){return getCount(lq, rq, 0, 0, sz);}
    std::vector<bool> getCount(ll lq, ll rq, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){return std::vector<bool>(N, 0);}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            std::vector<bool> leftVec = getCount(lq, rq, 2 * node + 1, lv, mid);
            std::vector<bool> rightVec = getCount(lq, rq, 2 * node + 2, mid, rv);
            return merge(leftVec,rightVec);
        }
    }
};


int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    segtree st; st.init(n + 1);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); st.set(p, x);}

    while(m--){
        ll op, x, y; scanf("%lld %lld %lld", &op, &x, &y);
        if(op == 1){
            std::vector<bool> res = st.getCount(x - 1, y);
            int cnt(0); 
            for(ll p = 0; p < res.size(); p++){cnt += res[p];}
            printf("%d\n", cnt);
        }
        else if(op == 2){st.set(x - 1, y);}
    }

    return 0;
}
