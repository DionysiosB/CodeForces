#include <iostream>
#include <vector>
#include <map>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll n, k, m; std::cin >> n >> k >> m;
    std::vector<std::string> w(n); for(ll p = 0; p < n; p++){std::cin >> w[p];}
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){std::cin >> a[p];}

    for(ll p = 0; p < k; p++){
        ll x; std::cin >> x;
        ll mc(1e9 + 7);
        std::vector<ll> b(x);
        for(ll p = 0; p < x; p++){
            std::cin >> b[p]; --b[p];
            mc = (mc < a[b[p]]) ? mc : a[b[p]];
        }

        for(ll p = 0; p < x; p++){a[b[p]] = mc;}
    }

    std::map<std::string, ll> cm;
    for(ll p = 0; p < n; p++){cm[w[p]] = a[p];}

    ll cost(0);
    while(m--){std::string s; std::cin >> s; cost += cm[s];}
    std::cout << cost << std::endl;

    return 0;
}
