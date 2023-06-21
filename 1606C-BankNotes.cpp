#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> v(n);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            ll y(1); while(x--){y = 10 * y;}
            v[p] = y;
        }

        ll res(0); ++k;
        for(ll p = 1; k > 0 && p < n; p++){
            ll diff = v[p] / v[p - 1] - 1;
            ll cnt = (k < diff) ? k : diff;
            res += v[p - 1] * cnt; k -= cnt;
        }

        res += k * v.back();
        printf("%lld\n", res);
    }

}
