#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll ans(0);

    for(ll mx = 1; mx <= 30; mx++){
        ll cur(0);
        for(ll p = 0; p < n; p++){
            cur += a[p];
            cur = (cur > 0) ? cur : 0;
            cur = (a[p] <= mx) ? cur : 0;
            ll tmp = cur - mx;
            ans = (ans > tmp) ? ans : tmp;
        }
    }

    printf("%lld\n", ans);

    return 0;
}
