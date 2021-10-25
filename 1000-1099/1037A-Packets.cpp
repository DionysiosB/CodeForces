#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll cnt(0);
    for(long p = 1; p <= n; p *= 2){n -= p; ++cnt;}
    cnt += (n > 0);
    printf("%lld\n", cnt);

    return 0;
}
