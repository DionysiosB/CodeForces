#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        ll ans = v.back();
        for(ll p = 2; p < n; p++){
            ll test = v[p] - v[p - 2];
            ans = (ans < test) ? ans : test;
        }

        printf("%lld\n", ans);
    }

}
