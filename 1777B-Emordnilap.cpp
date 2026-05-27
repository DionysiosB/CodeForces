#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt((n * (n - 1)) % MOD);
        for(long p = 1; p <= n; p++){cnt *= p; cnt %= MOD;}
        printf("%lld\n", cnt);
    }

}
