#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long z(0), a(0);
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){++a;}
            else{++z;}
        }

        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){--a;}
            else{--z;}
        }

        bool possible(true);
        if((a < 0 && k % 2 == 0) || (a > 0 && k % 2 == 1)){possible = false;}
        puts(possible ? "YES" : "NO");
    }

}
