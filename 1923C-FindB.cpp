#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        std::vector<ll> cs(n + 1), cz(n + 1, 0);
        for(ll p = 1; p <= n; p++){
            ll x; scanf("%lld", &x);
            cs[p] = cs[p - 1] + x;
            cz[p] = cz[p - 1] + (x == 1);
        }

        while(q--){
            ll left, right; scanf("%lld %lld", &left, &right);
            ll len = right - left + 1;
            ll total = cs[right] - cs[left - 1];
            ll ones  = cz[right] - cz[left - 1];
            puts(  ((len > 1) && (total >= ones + len)) ? "YES" : "NO");
        }

    }

}
