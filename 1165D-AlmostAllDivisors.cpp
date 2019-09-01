#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> d(n); for(ll p = 0; p < n; p++){scanf("%lld", &d[p]);}
        sort(d.begin(), d.end());
        ll x = d[0] * d.back();
        std::vector<ll> c;
        for(ll p = 2; p * p <= x; p++){
            if(x % p){continue;}
            ll q = x / p;
            c.push_back(p); 
            if(p != q){c.push_back(q);}
        }

        sort(c.begin(), c.end());
        bool possible(c.size() == d.size());
        for(ll p = 0; p < c.size() && p < d.size(); p++){
            if(c[p] != d[p]){possible = false; break;}
        }

        if(possible){printf("%lld\n", x);}
        else{puts("-1");}
    }

    return 0;
}
