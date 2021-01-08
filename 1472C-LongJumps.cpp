#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll mx(0);
        for(ll p = n - 1; p >= 0; p--){
            if(p + a[p] < n){ll x = a[p + a[p]]; a[p] += x;}
            mx = (mx > a[p]) ? mx : a[p];
        }

        printf("%lld\n", mx);
    }

}
