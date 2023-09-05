#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll mx(-2e18);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); mx = (mx > a[p]) ? mx : a[p];}
        for(ll p = 0; p < n; p++){a[p] = mx - a[p];}
        k = (k - 1) % 2;
        if(k){
            mx = -2e18;
            for(ll p = 0; p < n; p++){mx = (mx > a[p]) ? mx : a[p];}
            for(ll p = 0; p < n; p++){a[p] = mx - a[p];}
        }

        for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
        puts("");
    }

    return 0;
}
