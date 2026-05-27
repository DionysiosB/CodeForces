#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> left(n); for(ll p = 0; p < n; p++){left[p] = a[p] + (p > 0 ? left[p - 1] : 0);}
        std::vector<ll> right(n); for(ll p = n - 1; p >= 0; p--){right[p] = a[p] + (p + 1 < n ? right[p + 1] : 0);}

        ll res(0);
        for(ll p = 1; p < n; p++){
            ll g = gcd(left[p - 1], right[p]);
            res = (res > g) ? res : g;
        }

        printf("%lld\n", res);
    }
}
