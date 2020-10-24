#include <cstdio>
#include <vector>
typedef long long ll;

//Segment Tree, RST

ll llmax(ll x, ll y){return (x > y) ? x : y;}

struct data{ll seg, sum, pref, suff;};

struct segtree{
    long sz; std::vector<data> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, data());
    }

    data initData(ll x){
        data ret;
        ret.sum = x;
        ret.seg = ret.pref = ret.suff = (x > 0) ? x : 0LL;
        return ret;
    }

    void set(long idx, ll val){set(idx, val, 0, 0, sz);}
    void set(long idx, ll val, long node, long lv, long rv){
        if(rv == lv + 1){f[node] = initData(val); return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){set(idx, val, 2 * node + 1, lv, mid);}
        else{set(idx, val, 2 * node + 2, mid, rv);}

        f[node].seg = llmax(llmax(f[2 * node + 1].seg, f[2 * node + 2].seg), f[2 * node + 1].suff + f[2 * node + 2].pref);
        f[node].sum = f[2 * node + 1].sum + f[2 * node + 2].sum;
        f[node].pref = llmax(f[2 * node + 1].sum + f[2 * node + 2].pref, f[2 * node + 1].pref);
        f[node].suff = llmax(f[2 * node + 1].suff + f[2 * node + 2].sum, f[2 * node + 2].suff);
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld:(%lld, %lld, %lld %lld)\n", p, f[p].seg, f[p].sum, f[p].pref, f[p].suff);}
        puts("===================");
        return;
    }


    ll getSeg(){return f[0].seg;}
};


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    segtree st; st.init(n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); st.set(p, x);}
    st.print();

    printf("%lld\n", st.getSeg());

    while(m--){
        ll x, y; scanf("%lld %lld", &x, &y);
        st.set(x, y);
        st.print();
        printf("%lld\n", st.getSeg());
    }

    return 0;
}
