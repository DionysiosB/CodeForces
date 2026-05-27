#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("1 ");
        for(long p = n; p > 1; p--){printf("%ld ", p);}
        puts("");
    }

}
