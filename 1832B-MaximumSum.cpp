#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        std::vector<ll> b(n); b[0] = a[0];
        for(long p = 1; p < n; p++){b[p] = b[p - 1] + a[p];}

        ll total(b[n - 1 - k]);
        for(ll p = 1; p <= k; p++){
            ll tst = b[n - 1 - k + p] - b[2 * p - 1];
            total = (total > tst) ? total : tst;
        }

        printf("%lld\n", total);
    }

}
