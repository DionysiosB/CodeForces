#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long w, b; scanf("%lld %lld", &w, &b);
        long double t = w + b;
        long res = (sqrt(1 + 8 * t) - 1) / 2.0;
        printf("%ld\n", res);
    }

}
