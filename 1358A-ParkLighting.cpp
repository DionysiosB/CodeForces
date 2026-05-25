#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long  res = (n * m + 1) / 2;
        printf("%ld\n", res);
    }

    return 0;
}
