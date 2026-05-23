#include <cstdio>
#include <vector>
typedef long long ll;

struct matrix{
    ll a, b, c, d;
    void unit(){b = c = 0; a = d = 1LL;}
    void print(){printf("%lld %lld\n%lld %lld\n", a, b, c, d);}
};

matrix product(matrix P, matrix Q, ll r){
    matrix M;
    M.a = (P.a * Q.a + P.b * Q.c) % r;
    M.b = (P.a * Q.b + P.b * Q.d) % r;
    M.c = (P.c * Q.a + P.d * Q.c) % r;
    M.d = (P.c * Q.b + P.d * Q.d) % r;
    return M;
}

struct segtree{
    ll sz; std::vector<matrix> f;
    ll modulo;

    void init(ll num, ll rr){
        modulo = rr;
        sz = 1; while(sz < num){sz *= 2;}
        matrix Z; Z.unit();
        f.assign(2 * sz, Z);
    }

    void set(ll idx, matrix V){set(idx, V, 0, 0, sz);}
    void set(ll idx, matrix V, ll node, ll lv, ll rv){
        if(rv == lv + 1){f[node] = V; return;}
        ll mid = (lv + rv) / 2;
        if(idx < mid){set(idx, V, 2 * node + 1, lv, mid);}
        else{set(idx, V, 2 * node + 2, mid, rv);}
        f[node] = product(f[2 * node + 1] , f[2 * node + 2], modulo);
    }

    matrix getProd(ll lq, ll rq){return getProd(lq, rq, 0, 0, sz);}
    matrix getProd(ll lq, ll rq, ll node, ll lv, ll rv){
        if(rq <= lv || rv <= lq){matrix I; I.unit(); return I;}
        else if(lq <= lv && rv <= rq){return f[node];}
        else{
            ll mid = (lv + rv) / 2;
            matrix leftProd = getProd(lq, rq, 2 * node + 1, lv, mid);
            matrix rightProd = getProd(lq, rq, 2 * node + 2, mid, rv);
            return product(leftProd , rightProd, modulo);
        }
    }
};


int main(){

    ll r, n, m; scanf("%lld %lld %lld\n", &r, &n, &m);
    segtree st; st.init(n, r);
    for(ll p = 0; p < n; p++){
        matrix F; scanf("%lld %lld\n%lld%lld\n", &F.a, &F.b, &F.c, &F.d); 
        st.set(p, F);
        scanf("\n");
    }

    while(m--){
        ll x, y; scanf("%lld %lld", &x, &y);
        matrix matProd = st.getProd(x - 1, y);
        matProd.print();
        puts("");
    }

    return 0;
}
