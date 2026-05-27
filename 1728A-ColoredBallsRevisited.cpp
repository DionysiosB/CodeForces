#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0), ans(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x > mx){mx = x; ans = p;}
        }

        printf("%ld\n", ans);
    }

}
