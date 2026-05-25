#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(k, 0);
    for(ll p = 0; p < n; p++){ll d; scanf("%lld", &d); ++a[d % k];}
    ll total(a[0] - a[0] % 2);
    for(ll p = 1; 2 * p <= k; p++){
        total += 2 * ((a[p] < a[k - p]) ? a[p] : a[k - p]);
        if(2 * p == k){total -= a[p] + a[p] % 2;}
    }

    printf("%lld\n", total);

    return 0;
}
