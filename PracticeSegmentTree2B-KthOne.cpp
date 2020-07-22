#include <cstdio>
#include <vector>
typedef long long ll;

//Segment Tree, RST

struct segtree{
    long sz; std::vector<ll> f;

    void init(ll num){
        sz = 1; while(sz < num){sz *= 2;}
        f.assign(2 * sz, 0LL);
    }

    void flip(long idx){flip(idx, 0, 0, sz);}
    void flip(long idx, long node, long lv, long rv){
        printf("idx:%ld node:%ld lv:%ld rv:%ld\n", idx, node, lv, rv);
        if(rv == lv + 1){f[node] = 1 - f[node]; return;}
        long mid = (lv + rv) / 2;
        if(idx < mid){flip(idx, 2 * node + 1, lv, mid);}
        else{flip(idx, 2 * node + 2, mid, rv);}
        f[node] = f[2 * node + 1] + f[2 * node + 2];
    }

    void print(){
        puts("===================");
        for(long p = 0; p < 2 * sz; p++){printf("%ld:%lld\n",p, f[p]);}
        puts("===================");
        return;
    }

    ll findOne(long k){return findOne(k, 0);}
    ll findOne(long k, long node){
        printf("k:%ld Node:%ld\n", k, node);
        if(f[node] == 1 && k == 0 && node >= sz - 1){return (node - sz + 1);}
        else if(k < f[2 * node + 1]){return findOne(k, 2 * node + 1);}
        else{return findOne(k - f[2 * node + 1], 2 * node + 2);}
        return 91;
    }
};


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    segtree st; st.init(n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(x){st.flip(p);};}
    //st.print();

    while(m--){
        long op, x; scanf("%ld %ld", &op, &x);
        if(op == 1){st.flip(x);} // st.print();}
        else if(op == 2){
            long loc = st.findOne(x);
            printf("%ld\n", loc);
            printf("==========================******\n");
        }
    }

    return 0;
}
