#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;

    ll n; scanf("%lld", &n);
    std::vector<ll> f(1, 1);

    for(ll k = 0; k < n; k++){
        ll x; scanf("%lld", &x);
        std::vector<ll> divs;
        for(ll u = 1; u * u <= x; u++){
            if(x % u){continue;}
            divs.push_back(u);
            if(x != u * u){divs.push_back(x / u);}
        }
        
        sort(divs.rbegin(), divs.rend());
        for(ll r : divs){
            if(r > f.size()){continue;}
            else if(r == f.size()){f.push_back(f.back());}
            else{f[r] += f[r - 1];}
            f[r] %= MOD;
        }
    }

    ll total(0);
    for(ll p = 1; p < f.size(); p++){total = (total + f[p]) % MOD;}
    printf("%lld\n", total);

    return 0;
}
