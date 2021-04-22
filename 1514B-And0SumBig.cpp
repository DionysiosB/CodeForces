#include <cstdio>
typedef long long ll;

int main(){

    ll MOD = 1e9+7;

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll res(1);
        for(ll p = 0; p < k; p++){res *= n; res %= MOD;}
        printf("%lld\n", res);
    }
}
