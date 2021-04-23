#include <cstdio>
#include <vector>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    ll n; scanf("%lld", &n);
    ll prod(1), cnt(0);
    std::vector<bool> a(n, 1);
    for(ll p = 1; p < n; p++){
        ll x = gcd(p, n);
        if(x > 1){a[p] = 0;}
        else{++cnt; prod *= p; prod %= n;}
    }

    if(prod > 1){--cnt; a[prod] = 0;}
    printf("%lld\n", cnt);
    for(ll p = 1; p < n; p++){if(a[p] > 0){printf("%lld ", p);}}
    puts("");
}
