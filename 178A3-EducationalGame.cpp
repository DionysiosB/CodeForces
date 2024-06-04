#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll cnt(0);
    ll dist(1); while(2 * dist < n){dist *= 2;}
    for(ll p = 0; p + 1 < n; p++){
        cnt += a[p];
        printf("%lld\n", cnt);
        if(p + dist >= n){dist /= 2;}
        a[p + dist] += a[p];
    }

    return 0;
}
