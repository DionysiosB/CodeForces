#include <cstdio>
#include <vector>
typedef long long ll;

const ll MOD = 998244353;

void dfs(const std::vector<std::vector<std::pair<ll, int> > > &gr, const ll &v, ll &z, ll &res){

    printf("In Vertex:%lld\n", v);
    std::vector<std::pair<ll, int> > tmp = gr[v];
    for(ll p = 0; p < tmp.size(); p++){
        ll nxtv = gr[v][p].first;
        int nxtw = gr[v][p].second;
        dfs(gr, nxtv, z, res);
        z += (1 - nxtw);
        res += nxtw * z; res %= MOD;
    }
}



int main(){


    ll n; scanf("%lld", &n);
    std::vector<std::vector<std::pair<ll, int> > > g(n);

    for(ll p = 0; p < n; p++){
        ll deg; scanf("%lld", &deg);
        std::vector<std::pair<ll, int> > v(deg);
        for(ll u = 0; u < deg; u++){scanf("%lld %d", &v[u].first, &v[u].second);}
        g[p] = v;
    }

    ll zeros(0), res(0);
    dfs(g, 0LL, zeros, res);
    printf("%lld\n", res);

    return 0;
}
