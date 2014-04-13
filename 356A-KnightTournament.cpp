#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *defeated = new long[n + 1];
    for(long k = 1; k <= n; k++){defeated[k] = 0;}

    
    long l(0), r(0), winner(0);
    for(long k = 0; k < m; k++){
        scanf("%ld %ld %ld", &l, &r, &winner);
        for(long current = l; current <= r; current++){if(defeated[current] == 0){defeated[current] = winner;}}
        defeated[winner] = 0;
    }

    for(long k = 1; k <= n; k++){printf("%ld ", defeated[k]);};  printf("\n");

    return 0;
}
