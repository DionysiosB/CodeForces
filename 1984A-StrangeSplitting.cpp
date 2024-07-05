#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        long y; for(long p = 1; p < n; p++){scanf("%ld", &y);}
        if(x == y){puts("NO"); continue;}
        puts("YES");
        printf("RB"); for(long p = 2; p < n; p++){printf("R");}
        puts("");
    }

}
