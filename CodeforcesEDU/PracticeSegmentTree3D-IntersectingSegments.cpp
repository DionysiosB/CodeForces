#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

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
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    ll getSum(long lq, long rq){return getSum(lq, rq, 0, 0, sz);}
    ll getSum(long lq, long rq, long node, long lv, long rv){
        if(rq <= lv || rv <= lq){return 0LL;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            long mid = (lv + rv) / 2;
            ll leftSum = getSum(lq, rq, 2 * node + 1, lv, mid);
            ll rightSum = getSum(lq, rq, 2 * node + 2, mid, rv);
            return (leftSum + rightSum);
        }

        return 0LL;
    }
};


int main(){

    long n; scanf("%ld", &n);
    segtree st; st.init(2 * n + 1);
    std::map<long, long> start;
    std::vector<long> cnt(n + 1, 0);
    std::vector<long> a(2 * n); for(long p = 0; p < 2 * n; p++){scanf("%ld", &a[p]);}

    for(long p = 0; p < 2 * n; p++){
        long x = a[p];
        if(!start.count(x)){start[x] = p; st.set(p, 1);}
        else{
            st.set(start[x], 0);
            cnt[x] += st.getSum(start[x], p);
        }
    }

    start.clear();

    for(long p = 2 * n - 1; p >= 0; p--){
        long x = a[p];
        if(!start.count(x)){start[x] = p; st.set(p, 1);}
        else{
            st.set(start[x], 0);
            cnt[x] += st.getSum(p, start[x]);
        }
    }

    for(long p = 1; p <= n; p++){printf("%ld ", cnt[p]);}
    puts("");

    return 0;
}
