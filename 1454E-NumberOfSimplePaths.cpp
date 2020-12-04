#include <cstdio>
#include <vector>
#include <set>
#include <queue>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::set<ll> > g(n + 1);
        for(ll p = 0; p < n; p++){
            ll x, y; scanf("%lld %lld", &x, &y);
            g[x].insert(y); g[y].insert(x);
        }

        std::queue<ll> q;
        for(ll p = 1; p <= n; p++){
            if(g[p].size() == 1){q.push(p);}
        }

        std::vector<ll> dep(n + 1, 1);
        while(q.size()){
            ll x = q.front();
            q.pop();
            ll y = *g[x].begin();
            dep[y] += dep[x]; dep[x] = 0;
            g[x].erase(y); g[y].erase(x);
            if(g[y].size() == 1){q.push(y);}
        }

        ll ans(0);
        for(ll p = 1; p <= n; p++){ans += dep[p] * (dep[p] - 1) / 2 + dep[p] * (n - dep[p]);}
        printf("%lld\n", ans);
    }

}
