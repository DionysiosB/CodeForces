#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, v, k; scanf("%lld %lld %lld", &n, &v, &k);
        std::vector<ll> a(n + 1, 0); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());

        ll left(0), mx(0);

        for(ll p = 0; p < k; p++){
            left += a[p];
            if(v < left){break;}
            ll tst = left;
            ll idx(p);
            while((idx + k <= n) && (tst + a[idx + k] <= v)){idx += k; tst += a[idx];}
            if((idx + k > n) && (tst + a[n] <= v)){idx = n;}
            mx = (idx > mx) ? idx : mx;
            if(mx >= n){break;}
        }

        printf("%lld\n", mx);
    }

    return 0;
}
