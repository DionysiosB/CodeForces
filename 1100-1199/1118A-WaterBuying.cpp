#include <cstdio>
typedef long long ll;

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        ll n, a, b; scanf("%lld %lld %lld", &n, &a, &b);
        ll ans(0);
        if(2 * a < b){ans = n * a;}
        else{ans = (n % 2) * a + (n / 2) * b;}
        printf("%lld\n", ans);
    }

    return 0;
}
