#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long long x(0), y(0);
        for(long p = 0; p < n; p++){long a; scanf("%ld", &a); x += a;}
        for(long p = 0; p < m; p++){long b; scanf("%ld", &b); y += b;}
        puts(x == y ? "Draw" : (x > y ? "Tsondu" : "Tenzing"));
    }

}
