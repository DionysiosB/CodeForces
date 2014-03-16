#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);

    if(n == 0 && m > 0){puts("Impossible");}
    else{
        long minSum = (n < m) ? m : n;
        long maxSum = n; if(m > 0){maxSum += m - 1;} 
        printf("%ld %ld", minSum, maxSum);
    }

    return 0;
}