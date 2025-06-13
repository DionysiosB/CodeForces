#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", 2 * n - 1);
        for(long p = 1; p < n; p++){
            printf("%ld 1 %ld\n%ld %ld %ld\n", p, p, p, p + 1, n);
        }
        printf("%ld 1 %ld\n", n, n);
    }

}
