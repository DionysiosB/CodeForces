#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(n + 1, 0);
        ll total(0);
        for(ll p = 1; p <= n; p++){
            ll x; scanf("%lld", &x);
            v[p] = v[p - 1];
            if(x < p){++v[p]; total += (x ? v[x - 1] : 0);}
        }

        printf("%lld\n", total);
    }

}
