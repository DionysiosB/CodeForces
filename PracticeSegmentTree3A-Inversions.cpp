#include <cstdio>
#include <vector>
typedef long long ll;

struct segtree{
    ll sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void set(ll idx){set(idx, 0, 0, sz);}
    void set(ll idx, ll node, ll lv, ll rv){
        //printf("idx:%lld node:%lld lv:%lld rv:%lld\n", idx, node, lv, rv);
        if(rv == lv + 1){f[node] = 1; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, 2 * node + 1, lv, mid);}
        else{set(idx, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    ll getInversions(ll pos){return getInversions(pos, 0, 0, sz);}
    ll getInversions(ll pos, ll node, ll lv, ll rv){
        if(rv <= pos){return 0LL;}
        else if(pos <= lv){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            ll leftSum = getInversions(pos, 2 * node + 1, lv, mid);
            ll rightSum = getInversions(pos, 2 * node + 2, mid, rv);
            return (leftSum + rightSum);
        }

        return 0LL;
    }

    void print(){
        puts("===================");
        for(ll p = 0; p < 2 * sz; p++){printf("%lld:%lld\n",p, f[p]);}
        puts("===================");
        return;
    }
};


int main(){

    ll n; scanf("%lld", &n);
    segtree st; st.init(n + 1);
    for(ll p = 1; p <= n; p++){
        ll x; scanf("%lld", &x);
        printf("%lld ", st.getInversions(x));
        st.set(x);
        //st.print();
    }
    puts("");

    return 0;
}
