#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(0), cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < prev){++cnt; prev = 0;}
            else{prev = x;}
        }

        printf("%ld\n", cnt);
    }

}
