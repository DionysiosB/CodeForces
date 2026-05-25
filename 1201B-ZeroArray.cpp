#include <cstdio>
typedef long long ll;

int main(){
    
    ll n; scanf("%lld", &n);
    ll total(0), mx(0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        total += x; 
        mx = (mx > x) ? mx : x;
    }

    puts((total % 2) || (2 * mx > total) ? "NO" : "YES");

    return 0;
}
