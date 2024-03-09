#include <cstdio>
#include <set>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);

        std::map<std::pair<ll, ll> , std::set<ll> > mods;

        ll cnt(0);
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a);
            std::pair<ll, ll> key = std::make_pair((x - (a % x)) % x, a % y);
            cnt += mods[key].size();
            mods[std::make_pair(a % x, a % y)].insert(p);
        }

        printf("%lld\n", cnt);
    }

}
