#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> w(n); ll res(0);
        std::vector<bool> d(n, 0);
        std::multiset<ll> s;
        for(ll p = 0; p < n; p++){scanf("%lld", &w[p]); res += w[p];}
        for(ll p = 1; p < n; p++){
            ll x, y; scanf("%lld %lld", &x, &y);
            --x; --y;
            if(d[x]){s.insert(w[x]);}   //The first edge is already counted in the sum
            if(d[y]){s.insert(w[y]);}
            d[x] = 1; d[y] = 1;
        }

        printf("%lld ", res);
        for(ll p = 2; p < n; p++){
            std::multiset<ll>::reverse_iterator it = s.rbegin();
            res += *it; s.erase(s.find(*it));
            printf("%lld ", res);
        }

        puts("");
    }
}
