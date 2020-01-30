#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long s(0); for(long p = 0; p < n; p++){long a; scanf("%ld", &a); s += a;}
        if((m < n) || (n <= 2)){puts("-1"); continue;}
        printf("%ld\n", 2 * s);
        printf("1 %ld\n", n);
        for(long p = 1; p < n; p++){printf("%ld %ld\n", p, p + 1);}
    }

    return 0;
}
