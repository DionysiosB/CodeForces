#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll d(n);
        for(ll p = 2; p * p <= n; p++){if(n % p == 0){d = p; break;}}
        printf("%lld\n", n + d + 2 * (k - 1));
    }

    return 0;
}
