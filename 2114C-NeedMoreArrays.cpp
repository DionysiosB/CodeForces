#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev; scanf("%ld", &prev);
        long cnt(1);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(prev + 1 < x){++cnt; prev = x;}
        }

        printf("%ld\n", cnt);
    }

}
