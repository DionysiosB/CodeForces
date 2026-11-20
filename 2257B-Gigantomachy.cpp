#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long a; scanf("%ld", &a); a += n;
        for(long p = 1; p < n; p++){long x; scanf("%ld", &x);}
        long b; scanf("%ld", &b); b += m;
        for(long p = 1; p < m; p++){long x; scanf("%ld", &x);}
        puts(a >= b ? "1" : "2");
    }

}
