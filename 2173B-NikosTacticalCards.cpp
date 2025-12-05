#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
       ll n; scanf("%lld", &n);
       std::vector<ll> a(n); for(ll &x : a){scanf("%lld", &x);}
       std::vector<ll> b(n); for(ll &x : b){scanf("%lld", &x);}
       ll mn(0), mx(0);
       for(ll p = 0; p < n; p++){
           ll fa(mn - a[p]);
           ll fb(mx - a[p]);
           ll fc(b[p] - mn);
           ll fd(b[p] - mx);
           mn = (fa < fb ? fa : fb); mn = (mn < fc ? mn : fc); mn = (mn < fd ? mn : fd);
           mx = (fa > fb ? fa : fb); mx = (mx > fc ? mx : fc); mx = (mx > fd ? mx : fd);
       }
       
       printf("%lld\n", mx);
    }
    
}
