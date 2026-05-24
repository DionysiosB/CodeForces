#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const int B = 33;
    ll n, L; scanf("%lld %lld", &n, &L);
    ll x(L); std::vector<int> bv(B, 0);
    for(ll p = 0; p < B; p++){bv[p] = x % 2; x /= 2;}

    std::vector<ll> price(B, 0);
    for(ll p = 0; p < n; p++){
        ll y; scanf("%lld", &y);
        price[p] = y;
        if((p > 0) && (2 * price[p - 1] < y)){price[p] = 2 * price[p - 1];}
    }
    for(ll p = n; p < B; p++){price[p] = 2 * price[p - 1];}

    ll cost(0);
    for(ll p = 0; p < B; p++){
        ll a = cost + bv[p] * price[p];
        ll b = (1 + bv[p]) * price[p];
        cost = (a < b) ? a : b;
    }

    printf("%lld\n", cost);

    return 0;
}
