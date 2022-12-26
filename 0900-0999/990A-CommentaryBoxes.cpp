#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, a, b; scanf("%lld %lld %lld %lld", &n, &m, &a, &b);
    ll u = (m * (1 + n / m) - n) * a;
    ll v = (n - m * (n / m)) * b;
    printf("%lld\n", (u < v) ? u : v);

    return 0;
}
