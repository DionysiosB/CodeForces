#include <cstdio>

int main(){
    long n; scanf("%ld",&n);
    for(long p = 1; p <= n; p++){
        for(long q = 1;q <= n; q++){printf("%ld ", (q & 1) ? ((q - 1) * n + p) :  (q * n - p + 1));}
        puts("");
    }

    return 0;
}
