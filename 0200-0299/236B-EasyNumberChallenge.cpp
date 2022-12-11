#include <cstdio>

int main(){

    const long modNumber(1073741824);
    int a(0), b(0), c(0); scanf("%d %d %d", &a,&b,&c);
    const long maxProd = a * b * c;

    long *divisors = new long[maxProd + 1];
    divisors[1] = 1; for(long k = 2; k <= maxProd; k++){divisors[k] = 2;}
    for(long k = 2; k <= maxProd/2; k++){for(long m = 2 * k; m <= maxProd; m += k){++divisors[m];}}

    long totalSum(0);
    for(int first = 1; first <= a; first++){
        for(int second = 1; second <= b; second++){
            for(int third = 1; third <= c; third++){
                long currentNumber(first * second * third);
                totalSum += divisors[currentNumber]; totalSum %= modNumber;
            }
        }
    }

    printf("%ld\n", totalSum);
    return 0;
}
