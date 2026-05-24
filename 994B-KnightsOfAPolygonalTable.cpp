#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
typedef long long ll;

struct knight{ll power, wealth, order;};
bool knightCompare(knight a, knight b){return a.power < b.power;}

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<knight> v(n);
    for(ll p = 0; p < n; p++){v[p].order = p;}
    for(ll p = 0; p < n; p++){scanf("%lld", &v[p].power);}
    for(ll p = 0; p < n; p++){scanf("%lld", &v[p].wealth);}
    sort(v.begin(), v.end(), knightCompare);

    std::multiset<ll> ms; ll sum(0);
    std::vector<ll> r(n, 0); r[v[0].order] = v[0].wealth;
    for(long p = 1; p < n; p++){
        if(v[p - 1].power < v[p].power){
            ms.insert(v[p - 1].wealth); sum += v[p - 1].wealth;
            if(ms.size() > k){sum -= *ms.begin(); ms.erase(ms.begin());}
        }

        r[v[p].order] = sum + v[p].wealth;
    }

    for(long p = 0; p < n; p++){printf("%lld ", r[p]);}
    puts("");

    return 0;
}
