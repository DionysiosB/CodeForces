#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll s(0); bool ans(true);
        for(ll p = 0; p < n; p++){s += a[p]; if(s <= 0){ans = false; break;}}
        s = 0; for(ll p = n - 1; p > 0; p--){s += a[p]; if(s <= 0){ans = false; break;}}
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
