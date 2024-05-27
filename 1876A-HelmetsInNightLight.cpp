#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, r; scanf("%lld %lld", &n, &r);
        
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p].second);}
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p].first);}
        sort(v.begin(), v.end());

        ll rem(n - 1), total(r);
        for(ll p = 0; p < n; p++){
            if(v[p].first >= r){break;}
            ll cnt = (rem < v[p].second) ? rem : v[p].second;
            total += cnt * v[p].first;
            rem -= cnt;
        }

        total += r * rem;
        printf("%lld\n", total);
    }

}
