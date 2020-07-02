#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, r; scanf("%lld %lld", &n, &r);
        ll ans(r >= n);
        r = (r >= n) ? (n - 1) : r;
        ans += r * (r + 1) / 2;
        printf("%lld\n", ans);
    }

    return 0;
}
