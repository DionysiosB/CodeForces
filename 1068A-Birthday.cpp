#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, k, l; scanf("%lld %lld %lld %lld", &n, &m, &k, &l);
    ll x = (k + l + m - 1) / m;
    printf("%lld\n", (m * x <= n) ? x : -1);
    
    return 0;
}
