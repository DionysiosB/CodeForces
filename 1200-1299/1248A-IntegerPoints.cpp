#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[2] = {0}; while(n--){ll x; scanf("%lld", &x); ++a[x & 1];}
        ll m; scanf("%lld", &m);
        ll b[2] = {0}; while(m--){ll x; scanf("%lld", &x); ++b[x & 1];}
        ll ans = a[0] * b[0] + a[1] * b[1];
        printf("%lld\n", ans);
    }

    return 0;
}
