#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<std::vector<ll> > w(n, std::vector<ll>(m, 0));
        for(ll row = 0; row < n; row++){for(ll col = 0; col < m; col++){scanf("%lld", &w[row][col]);}}

        ll total(0);
        for(ll row = 0; row < n; row++){
            for(ll col = 0; col < m; col++){
                std::vector<ll> v = {w[row][col], w[row][m - 1 - col], w[n - 1 - row][m - 1 - col],w[n - 1 - row][col]};
                sort(v.begin(),v.end());
                total += std::abs(v[1] - w[row][col]);
            }
        }

        printf("%lld\n", total);
    }

}
