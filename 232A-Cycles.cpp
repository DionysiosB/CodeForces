#include <cstdio>

int main(){

    const long N = 107;
    long g[N][N] = {0}; 
    long cycles; scanf("%ld", &cycles);
    long n(0);

    for(long p = 0; p < N; p++){
        if(cycles <= 0){break;}
        n = p;
        for(long q = 0; q < p; q++){
            if(cycles < q){break;}
            g[p][q] = g[q][p] = 1;
            cycles -= q;
            if(cycles <= 0){break;}
        }
    }

    printf("%ld\n", n + 1);
    for (long p = 0; p <= n; p++){for (long q = 0; q <= n; q++){printf("%ld", g[p][q]);}; puts("");}

    return 0;
}
