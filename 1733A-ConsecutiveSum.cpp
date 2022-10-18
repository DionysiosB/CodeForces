#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(k, 0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            a[p % k] = (a[p % k] > x) ? a[p % k] : x;
        }

        ll res(0);
        for(ll p = 0; p < k; p++){res += a[p];}
        printf("%lld\n", res);
    }

}
