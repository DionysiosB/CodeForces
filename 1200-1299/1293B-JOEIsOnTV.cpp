#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long double res(0.0);
    for(long p = 1; p <= n; p++){res += 1.0 / p;}
    printf("%.5Lf\n", res);

    return 0;
}
