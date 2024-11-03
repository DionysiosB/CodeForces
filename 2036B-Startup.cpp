#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
typedef long long ll;


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k); 
        std::map<ll, ll> m;
        for(ll p = 0; p < k; p++){
            ll b, c; scanf("%lld %lld", &b, &c);
            m[b] += c;
        }

        std::vector<ll> v;
        for(std::map<ll, ll>::iterator it = m.begin(); it != m.end(); it++){v.push_back(it->second);}
        sort(v.rbegin(), v.rend());
        ll total(0);
        for(ll p = 0; p < v.size() && p < n; p++){total += v[p];}
        printf("%lld\n", total);
    }

}
