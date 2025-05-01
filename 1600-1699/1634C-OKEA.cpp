#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if((n % 2) && (k > 1) ){puts("NO"); continue;}
        puts("YES");
        for(long u = 1; u <= n; u++){
            for(long p = 0; p < k; p++){printf("%ld ", u + n * p);}
            puts("");
        }
    }

}
