#include <cstdio>
#include <vector>
typedef long long ll;

int main(){
    
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);
        std::vector<ll> v(n); ll moved(0);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]); moved += y * (v[p] / x);}
        
        ll mxm(0);
        for(ll a : v){
            ll cur = a + moved - y * (a / x);
            mxm = (mxm > cur ? mxm : cur);
        }
        
        printf("%lld\n", mxm);
    }
    
}
