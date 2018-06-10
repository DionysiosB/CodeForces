#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);

    for(long p = 0; p < k; p++){
        for(long q = 0; q < n - 1; q++){
            long r(0);
            if((n - q - 2) & (1 << p)){r = n - (1 << p);}
            else{r = n;}
            printf("%ld ", r);
        }
        printf("%ld\n", n);
    }

    return 0;
}
