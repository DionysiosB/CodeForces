#include <cstdio>
typedef long long ll;

int main(){

    ll n, x; scanf("%lld %lld", &n, &x);
    ll A(0);
    for(ll p = 0; p < n; p++){ll a; scanf("%lld", &a); A += a;}
    puts((A + n - 1) == x ? "YES" : "NO");

    return 0;
}
