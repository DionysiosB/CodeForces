#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> m;
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++m[x];}
        ll prev(0); ll cnt(0);
        for(std::map<ll, ll>::iterator it = m.begin(); it != m.end(); it++){
            ll val = it->second;
            cnt += (val >= 2) * val * (val - 1) * prev / 2;
            cnt += (val >= 3) * val * (val - 1) * (val - 2) / 6;
            prev += val;
        }

        printf("%lld\n", cnt);
    }

}
