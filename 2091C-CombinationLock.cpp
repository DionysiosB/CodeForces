#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 2 == 0){puts("-1"); continue;}
        for(long p = 1; p <= n; p += 2){printf("%ld ", p);}
        for(long p = 2; p <= n; p += 2){printf("%ld ", p);}
        puts("");
    }

}
