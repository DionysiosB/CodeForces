#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(0);
    for(long a = 1; a <= n; a++){
        for(long b = a + 1; b <= n; b++){
            long c = a ^ b;
            cnt += (c > a) && (c > b) && (c < a + b) && (c <= n);
        }
    }

    printf("%ld\n", cnt);

    return 0;
}
