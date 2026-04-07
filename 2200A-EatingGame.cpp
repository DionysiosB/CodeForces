#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(-1), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > mx){mx = x; cnt = 1;}
            else if(x == mx){++cnt;}
        }

        printf("%ld\n", cnt);
    }

}
