#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long start(1);
        if(n % 2){start = 4; printf("3 1 2 ");}
        for(long p = start; p < n; p += 2){printf("%ld %ld ", p + 1, p);}
        puts("");
    }

}
