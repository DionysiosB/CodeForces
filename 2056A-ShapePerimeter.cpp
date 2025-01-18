#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long x, y;  scanf("%ld %ld", &x, &y);
        long total(4 * m);
        while(--n){
            scanf("%ld %ld", &x, &y);
            total += 2 * (x + y);
        }

        printf("%ld\n", total);
    }

}
