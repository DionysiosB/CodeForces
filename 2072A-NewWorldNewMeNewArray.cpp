#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, p; scanf("%ld %ld %ld", &n, &k, &p);
        if(k < - n * p || n * p < k){puts("-1"); continue;}
        if(k < 0){k = -k;}
        printf("%ld\n", (k + p - 1) / p);
    }

}
