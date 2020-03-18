#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, g, b; scanf("%lld %lld %lld", &n, &g, &b);
        ll h = (n + 1) / 2;
        ll r(h / g), m(h % g);
        ll res = r * (g + b) + (m ? m : -b);
        res = (res > n) ? res : n;
        printf("%lld\n", res);
    }

    return 0;
}
