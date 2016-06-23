#include <cstdio>

int main(){

    long long n, a, b; scanf("%lld %lld %lld\n", &n, &a, &b);

    if(a * b >= 6 * n){printf("%lld\n%lld %lld\n", a * b, a, b); return 0;}

    long long initialSmall = (a < b) ? a : b;
    long long initialLarge = (a < b) ? b : a;

    long long area = 1e18, bestSmall(0), bestLarge(0);
    for(long long p = initialSmall; p * p < 6 * n; p++){
        long long q = 6 * n / p;
        if(p * q < 6 * n){++q;}
        if(q < initialLarge){continue;}
        if(p * q < area){area = p * q; bestSmall = p; bestLarge = q;}
    }

    printf("%lld\n%lld %lld\n", area, (initialSmall == a ? bestSmall : bestLarge),(initialSmall == a ? bestLarge : bestSmall));

    return 0;
}
