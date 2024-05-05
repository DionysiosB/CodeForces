#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        std::vector<ll> v(67, 0);
        ll n; scanf("%lld", &n);
        ll res(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            ll cnt(0);
            while(x > 1){x /= 2; ++cnt;}
            res += v[cnt]++;
        }

        printf("%lld\n", res);
    }

    return 0;
}
