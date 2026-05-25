#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long a(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a += x;}
    long b(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); b += x;}
    puts(b <= a ? "Yes" : "No");

    return 0;
}
