#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long min(107), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < min){min = x; cnt = 1;}
            else if(x == min){++cnt;}
        }

        printf("%ld\n", n - cnt);
    }

}
