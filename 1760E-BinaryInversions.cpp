#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n, 0), a(n, 0), z(n, 0);
        ll total(0);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &v[p]);
            z[p] = (p > 0 ? z[p - 1] : 0) + (v[p] == 0);
            a[p] = (p > 0 ? a[p - 1] : 0) + (v[p] == 1);
            total += (v[p] ? 0 : a[p]);
        }

        ll mx(0);
        for(ll p = 0; p < n; p++){
            ll diff = (p > 0 ? a[p - 1] : 0) - (z.back() - z[p]);
            if(!v[p]){diff = -diff;}
            mx = (mx > diff ? mx : diff);
        }

        printf("%lld\n", total + mx);
    }

}
