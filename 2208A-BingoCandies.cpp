#include <cstdio>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long num(0), f(0);
        for(long p = 0; p < n * n; p++){
            long x; scanf("%ld", &x);
            if(!f){num = x; f = 1;}
            else{f += 2 * (num == x) - 1;}
        }

        puts(f <= n * (n - 2) ? "YES" : "NO");
    }

}

