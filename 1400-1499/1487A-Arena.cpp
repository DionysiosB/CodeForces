#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(107), cnt(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(a < mn){mn = a; cnt = 1;}
            else if(a == mn){++cnt;}
        }

        printf("%ld\n", n - cnt);
    }

}
