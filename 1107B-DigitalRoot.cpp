#include <cstdio>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    while(n--){
        ll k, x; scanf("%lld %lld", &k, &x);
        printf("%lld\n", 9 * (k - 1) + x);
    }

    return 0;
}
