#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> v(2 * n);
        for(ll p = 0; p < 2 * n; p++){scanf("%lld", &v[p]);}
        sort(v.begin(), v.end());
        ll sumdiff(v.back());
        printf("%lld ", v.back());

        for(ll p = 0; p < 2 * n - 2; p++){
            printf("%lld ", v[p]);
            sumdiff += (p % 2 ? 1 : -1) * v[p];
        }
        printf("%lld %lld\n", sumdiff + v[2 * n - 2], v[2 * n - 2]);
    }

}
