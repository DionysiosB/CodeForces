#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll x1, y1, x2, y2; scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        ll ans = (x2 - x1) * (y2 - y1) + 1;
        printf("%lld\n", ans);
    }

    return 0;
}
