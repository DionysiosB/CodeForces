#include <cstdio>
typedef long long ll;

int main(){

    int t; scanf("%d", &t);
    while(t--){
        ll x, y, k; scanf("%lld %lld %lld", &x, &y, &k);
        ll total(0);
        for(ll p = 0; p < k; p++){
            total += (y % x);
            //printf("p:%lld x:%lld y:%lld\n", p, x, y);
            if(y < 2 * x){total += (k - 1 - p) * (y - x); break;}
            //printf("p:%lld x:%lld y:%lld total:%lld\n", p, x, y, total);
            ++x; ++y;
        }

        printf("%lld\n", total);
    }

    return 0;
}
