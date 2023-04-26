#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        int a = 4 - (x1 == 1 || x1 == n) - (y1 == 1 || y1 == m);
        int b = 4 - (x2 == 1 || x2 == n) - (y2 == 1 || y2 == m);
        printf("%d\n", a < b ? a : b);
    }

}

