#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::vector<ll> > cost(4, std::vector<ll>(n + 1, 0));
    for(ll row = 1; row <= 3; row++){for(ll p = 1; p <= n; p++){scanf("%lld", &cost[row][p]);}}
    std::vector<std::vector<ll> > g(n + 1);
    bool possible(true);
    for(ll p = 1; p < n && possible; p++){
        ll x, y; scanf("%lld %lld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
        if(g[x].size() > 2 || g[y].size() > 2){possible = false;}
    }

    if(!possible){puts("-1"); return 0;}

    ll start(-1);
    for(ll p = 1; start < 0 && p <= n; p++){if(g[p].size() == 1){start = p; break;}}

    std::vector<ll> v(n + 1, 0); v[1] = start;
    for(ll cnt = 2; cnt <= n; cnt++){
        for(ll x = 0; x < g[start].size(); x++){
            ll u = g[start][x];
            if(v[u]){continue;}
            else{v[u] = cnt; start = u; break;}
        }
    }

    std::vector<ll> colors{1, 2, 3};
    ll mn(1e18); std::vector<ll> scheme;
    do{
        ll total(0);
        for(long p = 1; p <= n; p++){total += cost[colors[v[p] % 3]][p];}
        if(total < mn){
            mn = total;
            scheme = colors;
        }
    } while(std::next_permutation(colors.begin(), colors.end()));


    printf("%lld\n", mn);
    for(long p = 1; p <= n; p++){printf("%lld ", scheme[v[p] % 3]);}
    puts("");

    return 0;
}
