#include <cstdio>
#include <algorithm>
typedef long long ll;

int main(){

    ll a[3], l; scanf("%lld %lld %lld %lld", &a[0], &a[1], &a[2], &l);
    ll s = a[0] + a[1] + a[2];
    long long cnt(0);
    for(ll p = 0; p <= l; p++){cnt += ((p + 1) * (p + 2)) / 2;}
    for(ll p = 0; p < 3; p++){
        for (ll q = 0; q <= l; q++) {
            ll x = l - q;
            ll y = a[p] + q - (s - a[p]);
            ll z = (x < y) ? x : y;
            if(z >= 0){cnt -= ((z + 1) * (z + 2)) / 2;}
        }
    }

    printf("%lld\n", cnt);

    return 0;
}
