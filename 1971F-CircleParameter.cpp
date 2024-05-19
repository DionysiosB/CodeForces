#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(1);
        for(ll p = 1; p <= n; p++){
            cnt += (ll) std::sqrt( (n + 1) * (n + 1) - p * p - 1) - (ll)std::sqrt(n * n - p * p - 1);
        }

        printf("%lld\n", 4 * cnt);
    }
}
