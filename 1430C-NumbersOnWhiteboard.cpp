#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        puts("2");
        long cur(n);
        for(long p = n - 1; p >= 1; p--){
            printf("%ld %ld\n", p, cur);
            cur = (cur + p + 1) / 2;
        }
    }

    return 0;
}
