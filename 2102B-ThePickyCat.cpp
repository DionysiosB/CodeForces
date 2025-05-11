#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        x = (x > 0 ? x : -x);

        long cnt(0);
        for(long p = 1; p < n; p++){
            long y; scanf("%ld", &y);
            y = (y > 0 ? y : -y);
            cnt += (y >= x);
        }

        puts(cnt >= (n - 1)/2 ? "YES" : "NO");
    }

}
