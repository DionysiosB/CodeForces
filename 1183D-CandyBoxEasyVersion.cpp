#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;

int main(){

    ll q; scanf("%lld", &q);
    while(q--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> cnts;
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++cnts[x];}
        std::vector<ll> v;
        for(std::map<ll, ll>::iterator it = cnts.begin(); it != cnts.end(); it++){v.push_back(it->second);}
        sort(v.rbegin(), v.rend());
        ll cur(2e6); ll sum(0);
        for(ll p = 0; p < v.size(); p++){
            cur = (cur < v[p]) ? cur : v[p]; 
            sum += cur--;
            if(cur <= 0){break;}
        }
        printf("%lld\n", sum);
    }

    return 0;
}
