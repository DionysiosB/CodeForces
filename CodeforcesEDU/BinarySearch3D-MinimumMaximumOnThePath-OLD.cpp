#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

struct road{ll from, to, val;};
bool roadCompare(road x, road y){return x.from < y.from;}

std::vector<ll> findPath(const std::vector<road> &a, ll n, ll d, ll x){
    std::vector<std::vector<ll> > g(n + 1);
    //This needs to be done with dfs to avoid memory limit error
    for(ll p = 0; p < a.size(); p++){
        if(a[p].val > x){continue;}
        //printf("X:%lld Y:%lld Val:%lld\n", a[p].from, a[p].to, a[p].val);
        ll x = a[p].from;
        ll y = a[p].to;
        if(x != 1 && (g[x].size() <= 0 || g[x][0] != 1)){continue;}
        if(g[y].size() > 0 && g[y][0] == 1 && g[x].size() + 1 > g[y].size()){continue;}
        g[y] = g[x]; g[y].push_back(x);
    }

    /*
    for(ll p = 1; p <= n; p++){
        printf("Node:%lld ", p);
        for(ll u = 0; u < g[p].size(); u++){printf(" %lld ", g[p][u]);}
        puts("");
    }
    */

    if(g[n].size() > 0 && g[n].size() <= d && g[n][0] == 1){g[n].push_back(n);}
    else{g[n] = std::vector<ll>(0);}

    //printf("Return:%ld\n", g[n].size());

    return g[n];
}

int main(){

    ll n, m, d; scanf("%lld %lld %lld", &n, &m, &d);
    std::vector<road> a(m);

    ll left(0), right(0);
    for(ll p = 0; p < m; p++){
        ll ifrom, ito, ival; scanf("%lld %lld %lld", &ifrom, &ito, &ival);
        a[p].from = ifrom;
        a[p].to = ito;
        a[p].val = ival;
        right = (right > ival) ? right : ival;
    }

    sort(a.begin(), a.end(), roadCompare);

    std::vector<ll> res;
    while(left <= right){
        ll mid = (left + right) / 2;
        //printf("*** %lld\n", mid);
        std::vector<ll> test = findPath(a, n, d, mid);
        if(test.size() > 0 && test.size() <= d + 1){res = test; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%ld\n", res.size() - 1);
    for(long p = 0; p < res.size(); p++){printf("%lld ", res[p]);}
    puts("");

    return 0;
}
