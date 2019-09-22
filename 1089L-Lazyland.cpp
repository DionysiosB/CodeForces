#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<std::pair<ll, ll> > v(n);
    std::vector<ll> w(k, 0);
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); v[p].second = x - 1; ++w[x - 1];}
    for(ll p = 0; p < n; p++){scanf("%lld", &v[p].first);}
    sort(v.begin(), v.end());
    ll idx(0), res(0);
    for(ll p = 0; p < n; p++){
        ll x = v[p].second;
        if(w[x] > 1){
            while(idx < k && w[idx] > 0){++idx;}
            if(idx >= k){break;}
            --w[x]; w[idx] = 1; res += v[p].first;
        }
    }

    printf("%lld\n", res);

    return 0;
}
