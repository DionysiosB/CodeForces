#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        long y(x); for(long p = 1; p < n; p++){scanf("%ld", &y);}
        puts(y <= x + n + 1 ? "YES" : "NO");
    }

}
