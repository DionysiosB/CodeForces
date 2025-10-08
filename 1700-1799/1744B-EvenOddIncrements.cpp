#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        ll ac(0), as(0), ts(0), tc(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x & 1){++tc; ts += x;}
            else{++ac; as += x;}
        }

        for(ll p = 0; p < q; p++){
            int w; ll x; scanf("%d %lld", &w, &x);
            if(w){
                ts += tc * x;
                if(x & 1){ac += tc; tc = 0; as += ts; ts = 0;}
            }
            else{
                as += ac * x;
                if(x & 1){tc += ac; ac = 0; ts += as; as = 0;}
            }

            printf("%lld\n", as + ts);
        }

    }

}
