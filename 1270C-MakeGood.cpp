#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll s(0), x(0);
        for(long p = 0; p < n; p++){ll a; scanf("%lld", &a); s += a; x ^= a;}
        printf("2\n%lld %lld\n", s + x, x);
    }

    return 0;
}
