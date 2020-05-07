#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}

    ll t(1); while(2 * t < n){t *= 2;}
    ll cnt(0);
    for(long p = 0; p < n - 1; p++){
        if(p + t >= n){t /= 2;}
        a[p + t] += a[p];
        cnt += a[p];
        a[p] = 0;
        printf("%lld\n", cnt);
    }

    return 0;
}
