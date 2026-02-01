#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> m;
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++m[x];}
        std::vector<ll> a, s;
        for(std::pair<ll, ll> x : m){a.push_back(x.first); s.push_back(x.second);}
        for(ll p = s.size() - 2; p >= 0; p--){s[p] += s[p + 1];}
        std::vector<ll> b(n); for(ll &x : b){scanf("%lld", &x);}
        for(ll p = 1; p < n; p++){b[p] += b[p - 1];}

        ll idx(0), best(0);
        for(ll p = s.size() - 1; p >= 0; p--){
            const ll cnt = s[p];
            const ll x = a[p];
            while(idx < n && cnt >= b[idx]){++idx;}
            ll score = x * idx;
            best = (best > score ? best : score);
        }

        printf("%lld\n", best);
    }

}
