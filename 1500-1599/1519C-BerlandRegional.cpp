#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);

        std::vector<std::pair<ll, ll> > w(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &w[p].first);}
        for(ll p = 0; p < n; p++){scanf("%lld", &w[p].second);}

        std::vector<std::vector<ll> > s(n + 1);
        for(ll p = 0; p < n; p++){s[w[p].first].push_back(w[p].second);}
        for(ll p = 1; p <= n; p++){sort(s[p].begin(), s[p].end());}

        std::vector<ll> res(n + 1, 0);
        for(ll u = 1; u <= n; u++){
            if(s[u].size() <= 0){continue;}
            for(ll p = 1; p < s[u].size(); p++){s[u][p] += s[u][p - 1];}
            ll sum = s[u].back();
            for(ll p = 1; p <= s[u].size(); p++){
                ll leftout = s[u].size() % p;
                res[p] += (sum - (leftout > 0 ? s[u][leftout - 1] : 0));
            }
        }

        for(ll p = 1; p <= n; p++){printf("%lld ", res[p]);}
        puts("");
    }

}
