#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long left(0), right(0), total(0);
    while(n--){scanf("%ld %ld", &left, &right); total += right - left + 1;}

    long numMoves = k - total % k;
    if(numMoves == k){numMoves = 0;}
    printf("%ld\n", numMoves);

    return 0;
}
