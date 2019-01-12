#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> lv(n, 0), rv(n, 0), lc(n, 0), rc(n, 0);

    lv[0] = a[0], lc[0] = 0;
    for(ll p = 1; p < n; p++){
        lv[p] = lv[p - 1] + 1;
        lv[p] = (lv[p] > a[p]) ? lv[p] : a[p];
        lc[p] = lc[p - 1] + (lv[p] - a[p]);
    }

    rv[n - 1] = a[n - 1], rc[n - 1] = 0;
    for(ll p = n - 2; p >= 0; p--){
        rv[p] = rv[p + 1] + 1;
        rv[p] = (rv[p] > a[p]) ? rv[p] : a[p];
        rc[p] = rc[p + 1] + (rv[p] - a[p]);
    }

    ll minCost(2e18);
    for(ll p = 0; p < n; p++){
        ll cur = a[p];
        if(p > 0 && cur <= lv[p - 1]){cur = lv[p - 1] + 1;}
        if(p + 1 < n && cur <= rv[p + 1]){cur = rv[p + 1] + 1;}
        ll cost = cur - a[p];
        if(p > 0){cost += lc[p - 1];}
        if(p + 1 < n){cost += rc[p + 1];}
        minCost = (minCost < cost) ? minCost : cost;
    }

    printf("%lld\n", minCost);

    return 0;
}
