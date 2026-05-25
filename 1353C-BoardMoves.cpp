#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        n /= 2;
        ll res = 8 * n * (n + 1) * (2 * n + 1) / 6;
        printf("%lld\n", res);
    }

    return 0;
}
