#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a = (n - m) / (m + 1);
        ll b = (n - m) % (m + 1);
        ll ans = n * (n + 1) / 2 - (m + 1) * a * (a + 1) / 2 - b * (a + 1);
        printf("%lld\n", ans);
    }

    return 0;
}
