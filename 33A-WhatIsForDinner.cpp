#include <cstdio>

int main(){

    long n(0), m(0), k(0); scanf("%ld %ld %ld", &n, &m, &k);
    long *viability = new long[m + 1];

    const long maxV = 1000000;
    for(long row = 1; row <= m; row++){viability[row] = maxV;}

    for(int p = 0; p < n; p++){
        long currentRow(0), currentV(0); scanf("%ld %ld", &currentRow, &currentV);
        if(currentV < viability[currentRow]){viability[currentRow] = currentV;}
    }

    long total(0);
    for(long row = 1; row <= m; row++){total += viability[row];}
    printf("%ld\n", total < k ? total : k);




    delete[] viability;
    return 0;
}
