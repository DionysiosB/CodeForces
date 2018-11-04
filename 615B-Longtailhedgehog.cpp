#include <cstdio>
#include <vector>
typedef long long ll;

void dfs(ll node, const std::vector<std::vector<ll> > &g, std::vector<ll> &length){

    if(length[node] >= 0){return;}
    long maxLength(0);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(length[u] < 0){dfs(u, g, length);}
        long cand = 1 + length[u];
        maxLength = (maxLength > cand) ? maxLength : cand;
    }
    
    length[node] = maxLength;
    return ;
}


int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<std::vector<ll> > g(n);
    std::vector<ll> count(n, 0);
    for(ll p = 0; p < m; p++){
        ll x, y; scanf("%lld %lld", &x, &y);
        --x; --y; 
        ++count[x]; ++count[y];
        if(x < y){g[y].push_back(x);} else{g[x].push_back(y);}
    }

    std::vector<ll> length(n, -1);
    for(ll p = 0; p < n; p++){if(length[p] < 0){dfs(p, g, length);}}

    ll best(0);
    for(ll p = 0; p < n; p++){
        ll cand = count[p] * (1 + length[p]);
        best = (best > cand) ? best : cand;
    }

    printf("%lld\n", best);

    return 0;
}
