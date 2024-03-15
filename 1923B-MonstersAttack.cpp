#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p].second);}
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            v[p].first = (x > 0 ? x : -x);
        }

        sort(v.begin(), v.end());

        ll prev(0), rem(0);
        bool ans(true);
        for(ll p = 0; ans && p < n; p++){
            rem += k * (v[p].first - prev);
            rem -= v[p].second;
            prev = v[p].first;
            if(rem < 0){ans = false;}
        }

        puts(ans ? "YES" : "NO");
    }

}
