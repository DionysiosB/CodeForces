#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, x; scanf("%lld %lld %lld", &n, &m, &x);
        std::multiset<std::pair<ll, ll> > s; for(ll p = 0; p < m; p++){s.insert(std::make_pair(0, p));}
        std::vector<ll> w(n);
        for(ll p = 0; p < n; p++){
            ll u; scanf("%lld", &u);
            std::multiset<std::pair<ll, ll> >::iterator lowest = s.begin();
            ll where = lowest->second;  u += lowest->first; s.erase(lowest);
            s.insert(std::make_pair(u, where));
            w[p] = where;
        }

        puts("YES");
        for(ll p = 0; p < n; p++){printf("%lld ", 1 + w[p]);}
        puts("");
    }

}
