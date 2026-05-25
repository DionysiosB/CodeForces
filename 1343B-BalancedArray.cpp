#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 4){puts("NO"); continue;}
        puts("YES");
        for(long p = 1; 2 * p <= n; p++){printf("%ld ", 2 * p);}
        for(long p = 0; p + 1 < n / 2; p++){printf("%ld ", 2 * p + 1);}
        printf("%ld\n", 3 * n / 2 - 1);
    }

    return 0;
}
