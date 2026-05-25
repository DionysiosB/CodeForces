#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", a, 2 * a);
    }

    return 0;
}
