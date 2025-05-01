#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(0); bool start(0);
        for(long p = 0; p < n; p++){
            long y; scanf("%ld", &y);
            if(y == p){continue;}
            if(!start){start = 1; x = y;}
            x &= y;
        }

        printf("%ld\n", x);
    }

}
