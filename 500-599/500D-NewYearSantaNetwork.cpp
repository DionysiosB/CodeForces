#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;

ll dfs(ll node, ll from, const std::vector<std::vector<ll> > &g, std::map<std::pair<ll, ll>, ll> &bt){

    ll cnt(1);
    for(ll p = 0; p < g[node].size(); p++){
        ll u = g[node][p];
        if(u == from){continue;}
        ll cv = dfs(u, node, g, bt);
        cnt += cv;
        if(u < node){bt[std::make_pair(u, node)] = cv;}
        else{bt[std::make_pair(node, u)] = cv;}
    }

    return cnt;
}


int main(){

    const ll S = 3;
    ll n; scanf("%lld", &n);
    std::vector<std::vector<ll> > g(n + 1);
    std::map<std::pair<ll, ll>, ll> w;
    std::vector<std::pair<ll, ll> > edgeList(n);
    for(ll p = 1; p < n; p++){
        ll x, y, z; scanf("%lld %lld %lld", &x, &y, &z);
        if(x > y){ll tmp = x; x = y; y = tmp;}
        g[x].push_back(y); g[y].push_back(x);
        edgeList[p] = std::make_pair(x, y);
        w[std::make_pair(x, y)] = z;
    }

    std::map<std::pair<ll, ll>, ll> bt;
    dfs(1, 0, g, bt); 

    for(std::map<std::pair<ll, ll>, ll>::iterator it = bt.begin(); it != bt.end(); it++){
        std::pair<ll, ll> edge = it->first;
        ll pr = it->second;
        it->second = pr * (n - pr);
    }


    ll sum(0);
    for(std::map<std::pair<ll, ll>, ll>::iterator it = bt.begin(); it != bt.end(); it++){
        std::pair<ll, ll> edge = it->first;
        ll mult = it->second;
        ll weight = w[edge];
        sum += mult * weight;
    }


    ll q; scanf("%lld", &q);
    const ll den = n * (n - 1) / 2;
    while(q--){
        ll num, len; scanf("%lld %lld", &num, &len);
        std::pair<ll, ll> edge = edgeList[num];
        sum -= w[edge] * bt[edge];
        w[edge] = len;
        sum += len * bt[edge];

        printf("%.8lf\n", 1.0 * S * sum / den);
    }

    return 0;
}
