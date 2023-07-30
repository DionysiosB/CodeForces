#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(1);
        for(ll p = 2; n % p == 0 && p <= n; p++){++cnt;}
        printf("%lld\n", cnt);
    }

}
