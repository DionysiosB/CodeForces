#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, d; scanf("%ld %ld %ld", &n, &m, &d);
        const long h = 1 + (d / m);
        long cnt = (n + h - 1) / h;
        printf("%ld\n", cnt);
    }

}
