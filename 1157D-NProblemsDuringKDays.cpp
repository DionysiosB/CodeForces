#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, d; scanf("%lld %lld", &n, &d);
    if(n < d * (d + 1) / 2){puts("NO"); return 0;}

    std::vector<ll> a(d); 
    const ll base = d * (d + 1) / 2;
    ll x = (n - base) / d;
    n -= base + x * d;
    for(ll p = 0; p < d; p++){a[p] = x + p + 1;}

    for(ll p = d - 1; n > 0 && p > 0; p--){
        ll diff = 2 * a[p - 1] - a[p];
        diff = (diff < n) ? diff : n;
        a[p] += diff; n -= diff;
    }

    if(n <= 0){
        puts("YES");
        for(ll p = 0; p < d; p++){printf("%lld ", a[p]);}
        puts("");
    }
    else{puts("NO");}

    return 0;
}
