#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> m; ll ans(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            x -= p;
            if(m.count(x)){ans += m[x];}
            ++m[x];
        }

        printf("%lld\n", ans);
    }

}
