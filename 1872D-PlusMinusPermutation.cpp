#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);
        ll lcm = (x / gcd(x, y)) * y;
        ll nx = (n / lcm) * (lcm / x - 1) + (n % lcm) / x;
        ll ny = (n / lcm) * (lcm / y - 1) + (n % lcm) / y;

        ll plus  = nx * (2 * n - nx + 1) / 2;
        ll minus = ny * (ny + 1) / 2;
        printf("%lld\n", plus - minus);
    }

}
