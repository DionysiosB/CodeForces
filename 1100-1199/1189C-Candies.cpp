#include <cstdio>
#include <vector>
typedef long long ll;


int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1), b(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]); b[p] = b[p - 1] + a[p];}
    ll q; scanf("%lld", &q);
    while(q--){
        ll l, r; scanf("%lld %lld", &l, &r);
        printf("%lld\n", (b[r] - b[l - 1]) / 10);
    }

    return 0;
}
