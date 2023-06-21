#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(1);
        for(ll p = 3; p <= 2 * n; p++){res *= p; res %= MOD;}
        printf("%lld\n", res);
    }

}
