#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const std::vector<ll> w = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}

        ll ans(0);
        for(ll prime : w){
            bool rpm(false);
            for(ll x : v){if(x % prime){rpm = true; break;}}
            if(rpm){ans = prime; break;}
        }

        printf("%lld\n", ans);
    }

}
