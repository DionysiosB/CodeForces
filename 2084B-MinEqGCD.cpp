#include <cstdio>
#include <vector>
typedef long long ll;
 
ll gcd(ll a, ll b){return b ? gcd(b, a % b) : a;}
 
 
int main(){
 
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n);
        ll idx(0), mn(1e18 + 7);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &v[p]);
            if(v[p] < mn){mn = v[p]; idx = p;}
        }
        
        ll g(0);
        for(ll p = 0; p < n; p++){
            if(p == idx || (v[p] % mn)){continue;}
            g = gcd(g, v[p] / mn);
        }
        
        puts(g == 1 ? "Yes" : "No");
    }
 
}
