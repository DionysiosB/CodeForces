#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, r, c; scanf("%ld %ld %ld %ld", &n, &m, &r, &c);
        long x = (n - r > r - 1) ? (n - r) : (r - 1);
        long y = (m - c > c - 1) ? (m - c) : (c - 1);
        printf("%ld\n", x + y);
    }
}
