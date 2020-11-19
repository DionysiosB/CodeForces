#include <iostream>
#include <vector>
typedef long long ll;

ll find(const std::vector<ll> &L, ll x){
    if(x == L[x]){return x;}
    return find(L, L[x]);
}

void merge(std::vector<ll> &L, std::vector<ll> &g, std::vector<ll> &s, ll x, ll y){
    ll u = find(L, x);
    ll v = find(L, y);
    if(u == v){return;}
    if(g[u] < g[v]){
        L[u] = v; 
        g[v] += g[u];
        s[u] -= s[v];
    }
    else{
        L[v] = u;
        g[u] += g[v];
        s[v] -= s[u];
    }
}

ll get(const std::vector<ll> &L, std::vector<ll> &s, ll x){
    if(x == L[x]){return s[x];}
    return (s[x] + get(L, s, L[x]));
}

int main(){

    ll n, m; std::cin >> n >> m;
    std::vector<ll> L(n + 1), g(n + 1), s(n + 1);
    for(ll p = 1; p <= n; p++){L[p] = p; g[p] = 1; s[p] = 0;}
    while(m--){
        std::string action; std::cin >> action;
        if(action == "add"){
            ll player, val; std::cin >> player >> val;
            ll leader = find(L, player);
            s[leader] += val;
        }
        else if(action == "join"){
            ll a, b; std::cin >> a >> b;
            a = find(L, a); b = find(L, b);
            if(a == b){continue;}
            merge(L, g, s, a, b);
        }
        else if(action == "get"){
            ll player; std::cin >> player;
            ll res = get(L, s, player);
            std::cout << res << std::endl;
        }
    }

    return 0;
}
