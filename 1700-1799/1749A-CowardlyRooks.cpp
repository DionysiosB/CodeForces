#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long x, y; for(long p = 0; p < m; p++){scanf("%ld %ld", &x, &y);}
        puts(m < n ? "YES" : "NO");
    }

}
