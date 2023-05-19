#include <cstdio>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll n; scanf("%lld", &n);
    ll g(0);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); g = gcd(g, x);}
    ll cnt(0);
    for(ll p = 1; p * p <= g; p++){
        if(g % p){continue;}
        cnt += 1 + (p * p != g);
    }

    printf("%lld\n", cnt);

    return 0;
}
