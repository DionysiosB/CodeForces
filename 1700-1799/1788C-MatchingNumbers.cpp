#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2 == 0){puts("No"); continue;}
        puts("Yes");
        for(long p = 1; p <= n; p += 2){printf("%ld %ld\n", p, 2 * n - p / 2);}
        for(long p = 2; p < n; p += 2){printf("%ld %ld\n", p, (3 * n - p + 1) / 2);}
    }

}
