#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    ll mn = (2 * m >= n) ? 0 : (n - 2 * m);
    ll u(0); while(u * (u - 1) / 2 < m){++u;}
    ll mx = n - u;
    printf("%lld %lld\n", mn, mx);

    return 0;
}
