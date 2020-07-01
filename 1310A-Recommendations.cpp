#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> v(n), t(n); 
    std::map<ll, std::multiset<ll> > d;
    std::map<ll, ll> s;
    std::set<ll> w;
    for(ll p = 0; p < n; p++){scanf("%lld", &v[p]); w.insert(v[p]);}
    for(ll p = 0; p < n; p++){scanf("%lld", &t[p]);}
    for(ll p = 0; p < n; p++){d[v[p]].insert(t[p]); s[v[p]] += t[p];}

    std::multiset<ll> carry; ll cur(0), res(0);
    for(std::set<ll>::iterator it = w.begin(); it != w.end(); it++){
        ll key = *it;
        const std::multiset<ll> mst = d[key];

        res += cur;
        for(std::multiset<ll>::iterator mit = mst.begin(); mit != mst.end(); mit++){carry.insert(*mit);}

        ll x = *(carry.rbegin());
        carry.erase(--carry.end());
        cur += s[key] - x;
        while(!carry.empty() && !(w.count(key + 1))){
            res += cur; 
            ll y = *(carry.rbegin());
            carry.erase(--carry.end());
            cur -= y;
            ++key;
        }
    }

    printf("%lld\n", res);
    
    return 0;
}
