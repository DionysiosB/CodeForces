#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

struct road{ll from, to, val;};

void dfs(const std::vector<std::vector<ll> > &g, ll from, ll node, ll n, ll d, std::vector<ll> sofar, std::vector<ll> &journey){

    if(journey.size() > 0){return;}
    sofar.push_back(node);
    if(sofar.size() > d + (node == n)){return;}
    //std::cout << "Dfs From:" << from << " Node:" << node << " dd:" << sofar.size() << " D:" << d << std::endl;
    if(node == n && sofar.size() <= d + 1){journey = sofar; return;}
    for(long p = 0; p < g[node].size(); p++){
        ll u = g[node][p];
        dfs(g, node, u, n, d, sofar, journey);
    }
}

std::vector<ll> findPath(const std::vector<road> &a, ll n, ll d, ll x){

    std::vector<std::vector<ll> > g(n + 1);
    for(ll p = 0; p < a.size(); p++){
        if(a[p].val > x){continue;}
        ll x = a[p].from;
        ll y = a[p].to;
        g[x].push_back(y);
    }

    std::vector<ll> out;
    std::vector<ll> cur;
    dfs(g, 0, 1, n, d, cur, out);

    return out;
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

    std::vector<ll> res;
    while(left <= right){
        ll mid = (left + right) / 2;
        //printf("***Mid: %lld\n", mid);
        std::vector<ll> test = findPath(a, n, d, mid);
        if(test.size() > 0 && test.size() <= d + 1){res = test; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%ld\n", res.size() - 1);
    for(long p = 0; p < res.size(); p++){printf("%lld ", res[p]);}
    puts("");

    return 0;
}
