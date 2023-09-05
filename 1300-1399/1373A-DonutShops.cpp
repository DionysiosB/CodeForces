#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
        printf("%lld %lld\n", (a < c ? 1LL : -1LL), (c < b * a ? b : -1LL));
    }

    return 0;
}
