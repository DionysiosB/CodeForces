#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;

int main(){

    const ll D = 205;

    ll n; scanf("%ld", &n);
    std::vector<std::pair<ll, ll> > a(n);
    for(ll p = 0; p < n; p++){scanf("%ld", &a[p].first);}
    for(ll p = 0; p < n; p++){scanf("%ld", &a[p].second);}
    sort(a.begin(), a.end());

    std::vector<ll> cr(n + 1, 0);
    std::vector<std::vector<ll> > gd(D + 1);
    std::map<ll, std::pair<ll, ll> > m;
    for(ll p = n; p >= 0; p--){
        ll u = a[p].first;
        ll v = a[p].second;
        gd[v].push_back(u);
        cr[p] = a[p].second + cr[p + 1];
        if(!m.count(u)){m[u] = std::make_pair(p, p);}
        m[u].first = (m[u].first < p) ? m[u].first : p;
    }

    for(ll p = 0; p < D; p++){sort(gd[p].rbegin(), gd[p].rend());}

    ll remCount(0), effortSmaller(0), minEffort(n * D);
    for(std::map<ll, std::pair<ll, ll> >::iterator it = m.begin(); it != m.end(); it++){
        ll key = it->first;
        std::pair<ll, ll> boundaries = it->second;
        ll left = boundaries.first;
        ll right = boundaries.second;
        ll numCount = right - left + 1;
        ll toRemove = 2 * left - right;
        ll effortLarger = cr[right + 1];
        while(toRemove > remCount){
            for(ll p = 0; p < D; p++){
                if(gd.size() > 0 && gd[p].back() >= key){continue;}
                effortSmaller += p; ++remCount; 
                if(toRemove <= remCount){break;}
            }
        }

        ll effort = effortSmaller + effortLarger;
        minEffort = (minEffort < effort) ? minEffort : effort;
    }

    printf("%lld\n", minEffort);

    return 0;
}
