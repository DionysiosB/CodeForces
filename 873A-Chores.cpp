#include <cstdio>

int main(){

    long n, k, x; scanf("%ld %ld %ld", &n, &k, &x);
    long total(0);
    for(long p = 0; p < n - k; p++){long a; scanf("%ld", &a); total += a;}
    total += k * x;
    printf("%ld\n", total);
    
    return 0;
}
