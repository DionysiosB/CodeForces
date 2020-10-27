#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long s(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        puts(s == m ? "YES" : "NO");
    }

    return 0;
}
