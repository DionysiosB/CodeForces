#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", 2 * (x - y));
        for(long p = y; p <= x; p++){printf("%ld ", p);}
        for(long p = x - 1; p > y; p--){printf("%ld ", p);}
        puts("");
    }

}
