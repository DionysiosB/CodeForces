#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n), b(n);
        for(ll &x : a){scanf("%lld", &x);}
        for(ll &x : b){scanf("%lld", &x);}
        ll mxa(0), sb(0);
        for(ll p = 0; p < n; p++){
            if(a[p] > b[p]){ll x = a[p]; a[p] = b[p]; b[p] = x;}
            mxa = (a[p] > mxa ? a[p] : mxa);
            sb += b[p];
        }

        printf("%lld\n", sb + mxa);
    }

}
