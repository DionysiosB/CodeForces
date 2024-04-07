#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p].first); v[p].second = p + 1;}
        sort(v.begin(), v.end());
        std::vector<ll> cs(n, 0); cs[0] = v[0].first;
        for(ll p = 1; p < n; p++){cs[p] = cs[p - 1] + v[p].first;}

        ll first(n - 1);
        for(ll p = n - 2; p >= 0; p--){
            if(cs[p] >= v[p + 1].first){first = p;}
            else{break;}
        }

        std::vector<ll> w; for(ll p = first; p < n; p++){w.push_back(v[p].second);}
        sort(w.begin(), w.end());
        printf("%ld\n", w.size());
        for(ll p = 0; p < w.size(); p++){printf("%lld ", w[p]);}
        puts("");
    }


}
