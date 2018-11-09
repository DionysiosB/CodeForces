#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    k = (k < n) ? k : n;

    ll w; scanf("%lld", &w);
    ll count(0);
    for(long p = 1; p < n; p++){
        ll x; scanf("%lld", &x);
        if(x > w){ll u = x; x = w; w = u; count = 1;}
        else{++count; if(count >= k){break;}}
    }

    printf("%lld\n", w);

    return 0;
}
