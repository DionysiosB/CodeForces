#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll x, y; scanf("%lld %lld", &x, &y);

    ll dw = (x - 1) > (y - 1) ? (x - 1) : (y - 1);
    ll db = (n - x) > (n - y) ? (n - x) : (n - y);

    puts((dw <= db) ? "White" : "Black");

    return 0;
}
