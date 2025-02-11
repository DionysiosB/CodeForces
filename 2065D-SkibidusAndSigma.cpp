#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> v(n);
        ll total(0);
        for(ll p = 0; p < n; p++){
            ll sum(0);
            for(size_t q = 0; q < m; q++){
                ll x; scanf("%lld", &x);
                total += (m - q) * x;
                sum += x;
            }
            v[p] = sum;
        }

        sort(v.rbegin(), v.rend());
        for(size_t p = 0; p < n; p++){total += (n - 1 - p) * m * v[p];}
        printf("%lld\n", total);
    }

}
