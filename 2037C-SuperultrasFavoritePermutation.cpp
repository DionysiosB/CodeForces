#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n < 5){puts("-1"); continue;}
        for(long p = 1; p <= n; p += 2){
            if(p == 5){continue;}
            printf("%ld ", p);
        }

        printf("5 4 ");

        for(long p = 2; p <= n; p += 2){
            if(p == 4){continue;}
            printf("%ld ", p);
        }

        puts("");
    }

}
