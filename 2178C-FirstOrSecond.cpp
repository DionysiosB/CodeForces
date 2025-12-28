#include <cstdio>
#include <algorithm>
typedef long long ll;
 
int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll f(0), s; scanf("%lld", &s);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            f = std::max(f - x, s);
            s += std::abs(x);
        }
        
        printf("%lld\n", f);
    }
    
}
