#include <cstdio>
#include <vector>
typedef long long ll;

ll dfs(ll node, ll from, const std::vector<std::vector<ll> > &g, const std::vector<ll> &w, ll &total){

    std::vector<long> sv;
    for(ll p = 0; p < g[node].size(); p++){
        ll u = g[node][p];
        if(u == from){continue;}
        sv.push_back(dfs(u, node, g, w, total));
    }

    if(w[node] > 0 || sv.size() == 0){return w[node];}

    ll sum(0), mw(sv[0]);
    for(ll p = 0; p < sv.size(); p++){
        sum += sv[p];
        mw = (mw < sv[p]) ? mw : sv[p];
    }

    ll nw = mw * sv.size();
    total += sum - nw;

    return nw;
}


int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> w(n); for(ll p = 0; p < n; p++){scanf("%lld", &w[p]);}
    std::vector<std::vector<ll> > g(n);
    for(long p = 1; p < n; p++){
        ll x, y; scanf("%lld %lld", &x, &y); --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    ll total(0);
    dfs(0, 0, g, w, total);
    printf("%lld\n", total);

    return 0;
}
