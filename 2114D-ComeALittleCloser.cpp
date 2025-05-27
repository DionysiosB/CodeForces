#include <cstdio>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > v(n);
        std::map<ll, ll> mr, mc;
        for(ll p = 0; p < n; p++){
            scanf("%lld %lld", &v[p].first, &v[p].second);
            ++mr[v[p].first];
            ++mc[v[p].second];
        }

        if(n == 1){puts("1"); continue;}

        ll ans(1e18 + 7);
        for(ll p = 0; p < n; p++){
            ll row = v[p].first;
            ll col = v[p].second;
            --mr[row]; if(!mr[row]){mr.erase(row);}
            --mc[col]; if(!mc[col]){mc.erase(col);}

            ll length = (mr.rbegin()->first) - (mr.begin()->first) + 1;
            ll width  = (mc.rbegin()->first) - (mc.begin()->first) + 1;
            ll tst = length * width;
            if(tst == n - 1){tst += (length < width ? length : width);}
            ans = (ans < tst ? ans : tst);

            ++mr[row]; ++mc[col];
        }

        printf("%lld\n", ans);
    }

}
