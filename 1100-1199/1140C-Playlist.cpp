#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
typedef long long ll;


int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<std::pair<ll, ll> > v(n);
    for(ll p = 0; p < n; p++){scanf("%lld %lld", &v[p].second, &v[p].first);}
    sort(v.rbegin(), v.rend());
    std::multiset<ll> s;

    ll duration(0), mxp(0);
    for(ll p = 0; p < n; p++){
        ll tst = (duration + v[p].second) * v[p].first;
        mxp = (mxp > tst ? mxp : tst);

        duration += v[p].second;
        s.insert(v[p].second);
        while(s.size() >= k){duration -= *s.begin(); s.erase(s.begin());}
    }

    printf("%lld\n", mxp);

    return 0;
}
