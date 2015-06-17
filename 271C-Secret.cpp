#include <cstdio>

int main(){
    
    long n, k; scanf("%ld %ld\n", &n, &k);
    if(n < 3 * k){puts("-1");}
    else{
        for(long p = 0; p < k; p++){printf("%ld ", 1 + (p + 1) % k);}
        for(long p = k; p < n; p++){printf("%ld ", 1 + p % k);}
        puts("");
    }

    return 0;
}
