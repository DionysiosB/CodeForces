#include <cstdio>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
    long numPieces(0);
    for(long p = 1; p < n; p++){
        long q = n - p;
        long x = a / p;
        long y = b / q;
        long z = (x < y) ? x : y;
        numPieces = (numPieces > z) ? numPieces : z;
    }

    printf("%ld\n", numPieces);

    return 0;
}
