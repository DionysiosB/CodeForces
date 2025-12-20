#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> odds, evens;
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x % 2){odds.push_back(x);}
            else{evens.push_back(x);}
        }

        sort(odds.rbegin(), odds.rend());
        sort(evens.rbegin(), evens.rend());

        ll pprev(0), prev(0), total(0);
        for(ll p = 1; p <= n; p++){
            ll cur(0);
            if(odds.empty() || (p == n && odds.size() % 2 == 0)){cur = 0;}
            else if(p == 1){total = cur = odds[0];}
            else if(p >= evens.size() + 2){cur = pprev;}
            else{total += evens[p - 2]; cur = total;}
            pprev = prev; prev = cur;
            printf("%lld ", cur);
        }

        puts("");
    }

}
