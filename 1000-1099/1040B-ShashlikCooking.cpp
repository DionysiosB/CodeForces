#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long m = 2 * k + 1;

    if(n <= m){printf("1\n%ld\n", (n + 1) / 2);}
    else if(n % m == 0){
        printf("%ld\n", n / m);
        for(long p = k + 1; p <= n; p += m){printf("%ld ", p);}
        puts("");
    }
    else if(n % m > k){
        long a = n / m;
        long u = n % m;
        printf("%ld\n", a + 1);
        for(long p = u - k; p < n; p += m){printf("%ld ", p);}
        puts("");
    }
    else if(n % m <= k){
        long a = -1 + (n / m);
        long u = m + n % m;
        long x = u / 2; u -= u / 2; long y = n + 1 - u + k;
        printf("%ld\n", a + 2);
        for(long p = x - k; p < y; p += m){printf("%ld ", p);}
        printf("%ld\n", y);
    }

    return 0;
}
