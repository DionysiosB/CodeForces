#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

long findDigitSum(long number, long base){
    long total(0);
    while(number > 0){total += number % base; number /= base;}
    return total;
}

int main(){
    long A(0); scanf("%ld", &A);
    long totalSum(0); for(long k = 2; k < A; k++){totalSum += findDigitSum(A, k);}
    long currentGcd = gcd(totalSum, A - 2);
    printf("%ld/%ld\n", totalSum/currentGcd, (A - 2)/currentGcd);
    return 0;
}
