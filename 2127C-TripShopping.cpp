#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll total(0);
        
        std::vector<std::pair<ll, ll> > v(n);
        for(long p = 0; p < n; p++){scanf("%lld", &v[p].first);}
        for(long p = 0; p < n; p++){scanf("%lld", &v[p].second);}
        for(long p = 0; p < n; p++){
            if(v[p].first > v[p].second){ll tmp = v[p].first; v[p].first = v[p].second; v[p].second = tmp;}
            total += v[p].second - v[p].first;
        }

        sort(v.begin(), v.end());
        ll add(2e9 + 7);
        for(ll p = 1; add > 0 && p < n; p++){
            ll tmp = v[p].first - v[p - 1].second;
            add = (add < tmp ? add : tmp);
        }

        total += 2 * (add > 0 ? add : 0);
        printf("%lld\n", total);
    }

}
