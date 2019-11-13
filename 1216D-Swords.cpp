#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll x, ll y){return (x == 0) ? y : gcd(y % x, x);}

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n);
    ll mx(0); for(ll p = 0; p < n; p++){ scanf("%lld", &a[p]); mx = (mx > a[p]) ? mx : a[p]; }
    ll z(0); for(ll p = 0; p < n; p++){z = gcd(z, mx - a[p]);}
    ll y(0); for(ll p = 0; p < n; p++){y += (mx - a[p]) / z;}
    printf("%lld %lld\n", y, z);

    return 0;
}
