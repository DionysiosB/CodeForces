#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > t(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &t[p].first);}
        for(ll p = 0; p < n; p++){scanf("%lld", &t[p].second);}
        sort(t.begin(), t.end());
        for(ll p = n - 2; p >= 0; p--){t[p].second += t[p + 1].second;}

        ll ans(t[0].second);
        for(ll p = 0; p < n; p++){
            ll pt = (p + 1 < n) ? t[p + 1].second : 0;
            ll dt = t[p].first;
            ll total = (pt > dt) ? pt : dt;
            ans = (ans < total) ? ans : total;
            if(dt > pt){break;}
        }
        printf("%lld\n", ans);
    }

}
