#include <cstdio>
#include <vector>
#include <cmath>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::vector<ll> > m(n, std::vector<ll>(n, 0));
    for(ll row = 0; row < n; row++){for(ll col = 0; col < n; col++){scanf("%lld", &m[row][col]);}}
    ll x = sqrt(m[1][0] * m[2][0] / m[1][2]);
    printf("%lld ", x);
    for(ll col = 1; col < n; col++){printf("%lld ", m[0][col] / x);}
    puts("");

    return 0;
}
