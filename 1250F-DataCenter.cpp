#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long area(10 * n);
    for(long p = 1; p * p <= n; p++){
        if(n % p){continue;}
        long tmp = 2 * (p + n / p);
        area = (area < tmp) ? area : tmp;
    }

    printf("%ld\n", area);

    return 0;
}
