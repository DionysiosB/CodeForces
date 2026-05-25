#include <cstdio>

int main(){

    long n, d; scanf("%ld %ld", &n, &d);
    long m; scanf("%ld", &m);
    while(m--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts(((x + y >= d) && (x + y <= 2 * n - d) && (y - x >= -d) && (y - x <= d)) ? "YES" : "NO");
    }

    return 0;
}
