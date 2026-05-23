#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);

    if(n % 2){
        for(long p = 0; p < n; p++){printf("%ld ", p);}; puts("");
        for(long p = 0; p < n; p++){printf("%ld ", p);}; puts("");
        for(long p = 0; p < n; p++){printf("%ld ", (2 * p) % n);}; puts("");
    }
    else{puts("-1");}

    return 0;
}
