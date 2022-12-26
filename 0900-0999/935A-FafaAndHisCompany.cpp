#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(1);
    for(long p = 2; p * p <= n; p++){
        if(n % p){continue;}
        cnt += 2 - (p * p == n);
    }
    printf("%ld\n", cnt);

    return 0;
}
