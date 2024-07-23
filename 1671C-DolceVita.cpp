#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, b; scanf("%lld %lld", &n, &b);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll cs(0), total(0);
        for(long p = 0; p < n; p++){
            cs += a[p];
            if(b < cs){break;}
            total += 1 + (b - cs) / (p + 1);
        }

        printf("%lld\n", total);
    }

}
