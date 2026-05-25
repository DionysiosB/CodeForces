#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    ll x(0), y(0);
    for(long p = 0; p < n / 2; p++){x += a[p];}
    for(long p = n / 2; p < n; p++){y += a[p];}
    printf("%lld\n", x * x + y * y);

    return 0;
}
