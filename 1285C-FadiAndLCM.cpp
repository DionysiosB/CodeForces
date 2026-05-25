#include <cstdio>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a % b);}

int main(){

    ll x; scanf("%lld", &x);
    ll a(0), b(0);
    for(ll p = 1; p * p <= x; p++){
        if(x % p){continue;}
        if(gcd(p, x / p) > 1){continue;}
        a = p; b = x / p;
    }

    printf("%lld %lld\n", a, b);

    return 0;
}
