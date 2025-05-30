#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const int B = 35;
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        std::vector<ll> v(B);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            ll x(a[p]);
            for(ll b = 0; x && b < B; b++){
                v[b] += (x % 2);
                x /= 2;
            }
        }

        ll mx(0);
        for(ll p = 0; p < n; p++){
            ll x(a[p]);
            ll total(0);
            for(ll b = 0; b < B; b++){
                total += (1 << b) * (x % 2 ? (n - v[b]) : v[b]);
                x /= 2;
            }
            mx = (mx > total ? mx : total);
        }

        printf("%lld\n", mx);
    }

}
