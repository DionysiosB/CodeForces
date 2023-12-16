#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > a(n);
        for(ll p = 0; p < n; p++){
            scanf("%lld", &a[p].first);
            a[p].second = p;
        }

        sort(a.begin(), a.end());
        std::vector<ll> stop(n, 0);
        ll cs(a[0].first);
        for(ll p = 1; p < n; p++){
            if(cs < a[p].first){stop[p - 1] = 1;}
            cs += a[p].first;
        }

        ll idx(n - 1);
        for(ll p = n - 1; p >= 0; p--){
            if(stop[p]){idx = p;}
            stop[p] = idx;
        }

        std::vector<ll> f(n);
        for(ll p = 0; p < n; p++){f[a[p].second] = stop[p];}
        for(ll p = 0; p < n; p++){printf("%lld ", f[p]);}
        puts("");


    }

}
