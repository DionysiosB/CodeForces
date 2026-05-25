#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll absval(ll x){return (x > 0) ? x : -x;}
ll sqval(ll x){return x * x;}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll nr, ng, nb; scanf("%lld %lld %lld", &nr, &ng, &nb);
        std::vector<ll> r(nr); for(ll p = 0; p < nr; p++){scanf("%lld", &r[p]);}
        std::vector<ll> g(ng); for(ll p = 0; p < ng; p++){scanf("%lld", &g[p]);}
        std::vector<ll> b(nb); for(ll p = 0; p < nb; p++){scanf("%lld", &b[p]);}
        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());
        
        ll kr(0), kg(0), kb(0), res(4e18);
        for(ll p = 0; p < nr; p++){
            while((kg + 1 < g.size()) && absval(g[kg + 1] - r[p]) < absval(g[kg] - r[p])){++kg;}
            while((kb + 1 < b.size()) && absval(b[kb + 1] - r[p]) < absval(b[kb] - r[p])){++kb;}
            ll cur = sqval(r[p] - g[kg]) + sqval(r[p] - b[kb]) + sqval(g[kg] - b[kb]);
            res = (res < cur) ? res : cur;
        }

        kr = kg = kb = 0;
        for(ll p = 0; p < ng; p++){
            while((kr + 1 < r.size()) && absval(r[kr + 1] - g[p]) < absval(r[kr] - g[p])){++kr;}
            while((kb + 1 < b.size()) && absval(b[kb + 1] - g[p]) < absval(b[kb] - g[p])){++kb;}
            ll cur = sqval(r[kr] - g[p]) + sqval(r[kr] - b[kb]) + sqval(g[p] - b[kb]);
            res = (res < cur) ? res : cur;
        }

        kr = kg = kb = 0;
        for(ll p = 0; p < nb; p++){
            while((kr + 1 < r.size()) && absval(r[kr + 1] - b[p]) < absval(r[kr] - b[p])){++kr;}
            while((kg + 1 < g.size()) && absval(g[kg + 1] - b[p]) < absval(g[kg] - b[p])){++kg;}
            ll cur = sqval(r[kr] - g[kg]) + sqval(r[kr] - b[p]) + sqval(g[kg] - b[p]);
            res = (res < cur) ? res : cur;
        }

        printf("%lld\n", res); 
    }

    return 0;
}
