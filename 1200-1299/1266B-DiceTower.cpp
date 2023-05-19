#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll d = n / 14;
        ll m = (n % 14);
        ll ans = (d >= 1) && (1 <= m) && (m <= 6);
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
