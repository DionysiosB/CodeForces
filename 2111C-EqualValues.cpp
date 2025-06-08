#include <cstdio>
typedef long long ll;
 
int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll prev, left(0); scanf("%lld", &prev);
        ll cost(prev * (n - 1));
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            ll test = x * ( (prev == x) ?  (left + n - p - 1) : (n - 1) ); 
            left = (prev == x ? left : p);
            cost = (cost < test ? cost : test);
            prev = x;
        }
        
        printf("%lld\n", cost);
        
    }
    
}
