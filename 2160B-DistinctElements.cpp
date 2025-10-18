#include <cstdio>
#include <vector>
typedef long long ll;
 
int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n);
        ll prev(0);
        for(ll p = 0; p < n; p++){
            ll b; scanf("%lld", &b);
            a[p] = ( (p + prev >= b) ? a[p + prev - b] : (p + 1));
            prev = b;
        }
        
        for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
        puts("");
    }
 
}
