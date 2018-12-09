#include <cstdio>

int main(){

    long R, C, k; scanf("%ld %ld %ld\n", &R, &C, &k);

    long row(1), col(1), dir(1);

    for(long p = 0; p < k; p++){
        long numCells = (p == 0) ? (R * C - 2 * (k - 1)) : 2;
        printf("%ld ", numCells);
        for(long q = 0; q < numCells; q++){
            printf("%ld %ld ", row, col);
            col += dir;
            if(col < 1 || col > C){++row; col -= dir; dir = -dir;}
        }
        puts("");
    }


    return 0;
}
