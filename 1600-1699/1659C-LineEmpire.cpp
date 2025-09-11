#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, a, b; scanf("%lld %lld %lld", &n, &a, &b);
        std::vector<ll> x(n + 1, 0), cs(n + 1, 0);
        for(ll p = 1; p <= n; p++){
            scanf("%lld", &x[p]);
            cs[p] = cs[p - 1] + x[p];
        }

        ll mincost( (a + b) * cs[n]);
        for(ll p = 0; p <= n; p++){
            ll tst = (a + b) * x[p] + b * (cs[n] - cs[p] - (n - p) * x[p]);
            mincost = (mincost < tst ? mincost : tst);
        }
        printf("%lld\n", mincost);

    }

}
