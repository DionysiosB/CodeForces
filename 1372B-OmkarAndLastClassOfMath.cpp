#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll div(n);
        for(ll p = 2; p * p <= n; p++){if(n % p == 0){div = p; break;}}
        printf("%lld %lld\n", n / div, n / div * (div - 1));
    }

    return 0;
}
