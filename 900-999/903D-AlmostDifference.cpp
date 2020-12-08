#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::map<ll, ll> m;
    long double total(0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        total += x * (2 * p - n + 1); // x * (p - (n - p - 1));
        if(m.count(x - 1)){total -= m[x - 1];}
        if(m.count(x + 1)){total += m[x + 1];}
        ++m[x];
    }

    printf("%.0Lf\n", total);

    return 0;
}
