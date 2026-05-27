#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res(337);
        res *= n; res %= MOD;
        res *= (n + 1); res %= MOD;
        res *= (4 * n - 1); res %= MOD;
        printf("%lld\n", res);
    }
}
