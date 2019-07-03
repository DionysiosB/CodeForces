#include <cstdio>
typedef long long ll;

ll gcd (ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    if((2 * m * n) % k != 0){puts("NO"); return 0;}

    ll g = gcd(2 * n , k);
    if(g == 1){m = 2 * m / k;}
    else{n = 2 * n / g; m = m * g / k;}

    printf("YES\n0 0\n%lld 0\n0 %lld\n", n, m);

    return 0;
}
