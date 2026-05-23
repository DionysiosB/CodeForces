#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    if(n % 2 == 0){puts("0");}
    else{
        ll mn(k * (m  / ((n + 1) / 2)));
        for (ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(p % 2 == 0){mn = (mn < x) ? mn : x;}
        }

        printf("%lld\n", mn);
    }

    return 0;
}
