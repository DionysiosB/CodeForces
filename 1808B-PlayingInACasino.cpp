#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<std::vector<ll> > f(n, std::vector<ll>(m, 0));
        for(ll row = 0; row < n; row++){
            for(ll col = 0; col < m; col++){
                scanf("%lld", &f[row][col]);
            }
        }

        ll total(0);
        for(int col = 0; col < m; col++){
            std::vector<ll> v(n);
            for(ll row = 0; row < n; row++){v[row] = f[row][col];}
            sort(v.begin(), v.end());
            for(ll p = 0; p < n; p++){total += (2 * p - (n - 1)) * v[p];}
        }

        printf("%lld\n", total);
    }

}
