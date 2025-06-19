#include <cstdio>
#include <vector>
typedef long long ll;

int main() {

    ll t; scanf("%lld", &t);
    while (t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        ll cnt(0);
        for(ll p = n - 1; p > 0; p--){
            ll d = (v[p - 1] + (v[p] - 1)) / v[p];
            cnt += (d > 0 ? d : 1) - 1;
            v[p - 1] /= d;
        }

        printf("%lld\n", cnt);
    }

}
