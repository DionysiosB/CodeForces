#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); cnt += (x % 2);}
        puts(((cnt & 1) || (1 <= cnt && cnt < n)) ? "YES" : "NO");
    }

    return 0;
}
