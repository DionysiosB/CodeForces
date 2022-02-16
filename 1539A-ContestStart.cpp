#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x, t; scanf("%lld %lld %lld", &n, &x, &t);
        ll a = (t / x);
        a = (a < n) ? a : n;
        ll res = n * a - a * (a + 1) / 2;
        printf("%lld\n", res);
    }

}
