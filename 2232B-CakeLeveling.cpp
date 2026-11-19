#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll s(0), rem(0), h(1e9 + 7);
        for(ll p = 1; p <= n; p++){
            ll a; scanf("%lld", &a);
            s += a;
            if((a >= h) || (rem + a >= h)){rem += (a - h);}
            else{h = (s / p); rem = (s % p);}
            printf("%lld ", h);
        }
        puts("");
    }

}
