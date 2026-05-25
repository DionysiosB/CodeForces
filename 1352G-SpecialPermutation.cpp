#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n < 4){puts("-1"); continue;}

        for(long p = n; p > 0; p--){
            if(p & 1){printf("%ld ", p);}
        }
        printf("%d %d ", 4, 2);
        for(long p = 6; p <= n; p += 2){printf("%ld ", p);}
        puts("");
    }

    return 0;
}
