#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        long y; for(long p = 1; p < n; p++){scanf("%ld", &y);}
        puts(x < y ? "YES" : "NO");
    }

    return 0;
}
