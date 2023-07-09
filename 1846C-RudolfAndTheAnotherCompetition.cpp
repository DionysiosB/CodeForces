#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m, h; scanf("%lld %lld %lld", &n, &m, &h);

        std::vector<ll> v(m); for(ll p = 0; p < m; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        ll ct(0), ms(0), mp(0);
        for(ll p = 0; p < m; p++){
            ct += v[p]; if(ct > h){break;}
            ++ms; mp += ct;
        }

        ll ans(1);

        for(ll idx = 1; idx < n; idx++){
            for(ll p = 0; p < m; p++){scanf("%lld", &v[p]);}
            sort(v.begin(), v.end());
            ct = 0; ll cnt(0), penalty(0);
            for(ll p = 0; p < m; p++){
                ct += v[p]; if(ct > h){break;}
                ++cnt; penalty += ct;
            }

            if(cnt < ms){continue;}
            else if(cnt > ms){++ans;}
            else if(cnt == ms){ans += (penalty < mp);}
        }

        printf("%lld\n", ans);
    }

}

