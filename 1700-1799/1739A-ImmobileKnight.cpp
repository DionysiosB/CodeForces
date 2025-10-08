#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        printf("%ld %ld\n", 1 + n / 2, 1 + m / 2);
    }

}
