#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x; scanf("%lld %lld", &n, &x);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.rbegin(), a.rend());
        ll s(0), ans(0);
        for(long p = 0; p < n; p++){
            s += a[p];
            if(s < (p + 1) * x){break;}
            ans = p + 1;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
