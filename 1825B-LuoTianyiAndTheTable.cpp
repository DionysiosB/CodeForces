#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll mxf(-1e5 - 7), mxs(-1e5 - 7), mnf(1e5 + 7), mns(1e5 + 7);
        for(ll p = 0; p < m * n; p++){
            ll a; scanf("%lld", &a);
            if(a >= mxf){mxs = mxf; mxf = a;}
            else if(a > mxs){mxs = a;}
            if(a <= mnf){mns = mnf; mnf = a;}
            else if(a < mns){mns = a;}
        }

        ll df(mxf - mnf), ds(mxf - mns);
        if(mxs - mnf > ds){ds = mxs - mnf;}

        ll res = (m * n - 1) * df - ( ((m < n) ? m : n) - 1) * (df - ds);
        printf("%lld\n", res);
    }

}
