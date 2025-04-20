#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> vl(n), vr(n), v(n);
        ll total(0);
        for(ll p = 0; p < n; p++){scanf("%lld", &vl[p]);}
        for(ll p = 0; p < n; p++){scanf("%lld", &vr[p]);}
        for(ll p = 0; p < n; p++){
            v[p] = (vl[p] < vr[p] ? vl[p] : vr[p]);
            total += vl[p] + vr[p];
        }

        sort(v.begin(), v.end());
        for(ll p = 0; p < n - k; p++){total -= v[p];}
        total -= (v[n - k] - 1);
        printf("%lld\n", total);
    }

}
