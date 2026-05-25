#include <cstdio>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(0);
        for(ll p = n; p < n + 100; p++){
            ll x(p), s(0); while(x){s += x % 10; x /= 10;}
            if(gcd(p, s) > 1){res = p; break;}
        }

        printf("%lld\n", res);
    }

}
