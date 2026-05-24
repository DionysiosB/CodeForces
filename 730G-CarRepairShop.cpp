#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> start(n + 1, 0), finish(n + 1, 0);
    for(ll p = 1; p <= n; p++){
        ll s, d; scanf("%lld %lld", &s, &d);
        ll a(s), b(s + d - 1);
        bool free(true);
        for(ll u = 0; u < p; u++){if(!((b < start[u]) || (finish[u] < a))){free = false; break;}}
        if(free){start[p] = s; finish[p] = b; continue;}

        for(ll t = 0; t < p; t++){
            a = finish[t] + 1;
            b = a + d - 1;
            free = true;
            for(ll u = 0; u < p; u++){if(!((b < start[u]) || (finish[u] < a))){free = false; break;}}
            if(!free){continue;}
            else if((start[p] == 0) || (a < start[p])){start[p] = a; finish[p] = b;}
        }
    }

    for(ll p = 1; p <= n; p++){printf("%lld %lld\n", start[p], finish[p]);}

    return 0;
}
