#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, cap; scanf("%lld %lld", &n, &cap);
        std::vector<std::pair<ll, ll> > w(n); for(ll p = 0; p < n; p++){scanf("%lld", &w[p].first); w[p].second = p + 1;}
        sort(w.begin(), w.end());
        std::vector<ll> res; ll cs(0);
        for(ll p = 0; p < n; p++){
            ll cur = w[p].first;
            ll which = w[p].second;
            ll tst = cs + cur;
            if(2 * tst < cap){cs += cur; res.push_back(which);}
            else if(cap <= 2 * tst && tst <= cap){cs += cur; res.push_back(which); break;}
            else if(cur <= cap){cs = cur; res = std::vector<ll>(1, which); break;}
            else{res = std::vector<ll>(0); break;}
        }

        if(cap <= 2 * cs && cs <= cap && res.size() > 0){
            printf("%ld\n", res.size());
            for(long p = 0; p < res.size(); p++){printf("%lld ", res[p]);};
            puts("");
        }
        else{puts("-1");}
    }

    return 0;
}
