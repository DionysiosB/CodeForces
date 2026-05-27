#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            while(x % 2 == 0){++cnt; x /= 2;}
        }

        long ans(0);
        for(long p = n; cnt < n && p >= 1; p--){
            long cur(0), mult(p);
            while(mult % 2 == 0){++cur; mult /= 2;}
            cnt += cur; ++ans;
        }

        printf("%ld\n", (cnt < n) ? -1 : ans);
    }

}
