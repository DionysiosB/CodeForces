#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll s(0); for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); s += x;}
        ll m = s % n;
        printf("%lld\n", m * (n - m));
    }

}
