#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    ll total(0);
    for(ll p = 0; 2 * p < n; p++){
        ll sum = a[p] + a[n - 1 - p];
        total += sum * sum;
    }

    printf("%lld\n", total);

    return 0;
}
