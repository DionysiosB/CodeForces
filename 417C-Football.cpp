#include <cstdio>

int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);

    if(n - 1 < 2 * k){puts("-1");}
    else{
        printf("%ld\n", n * k);
        for(long p = 0; p < n; p++){
            for(long q = 1; q <= k; q++){
                printf("%ld %ld\n", p + 1, 1 + ((p + q) % n));
            }
        }
    }

    return 0;
}
