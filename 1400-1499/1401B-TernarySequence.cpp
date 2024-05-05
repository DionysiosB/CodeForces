#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x0, x1, x2, y0, y1, y2;
        scanf("%lld %lld %lld", &x0, &x1, &x2);
        scanf("%lld %lld %lld", &y0, &y1, &y2);

        ll res(0), q(0);
        q = (x2 < y1) ? x2 : y1; res += 2 * q; x2 -= q; y1 -= q;
        q = (x2 < y2) ? x2 : y2; res += 0 * q; x2 -= q; y2 -= q;
        q = (x2 < y0) ? x2 : y0; res += 0 * q; x2 -= q; y0 -= q;

        q = (x0 < y2) ? x0 : y2; res += 0 * q; x0 -= q; y2 -= q;
        q = (x0 < y0) ? x0 : y0; res += 0 * q; x0 -= q; y0 -= q;
        q = (x0 < y1) ? x0 : y1; res += 0 * q; x0 -= q; y1 -= q;

        q = (x1 < y0) ? x1 : y0; res += 0 * q; x1 -= q; y0 -= q;
        q = (x1 < y1) ? x1 : y1; res += 0 * q; x1 -= q; y1 -= q;
        q = (x1 < y2) ? x1 : y2; res -= 2 * q; x1 -= q; y2 -= q;

        printf("%lld\n", res);
    }

    return 0;
}
