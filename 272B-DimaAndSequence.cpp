#include <cstdio>

int findBinaryOnes(long input){
    int output(0);
    while(input > 0){output += input % 2; input /= 2;}
    return output;
}

int main(){

    long n(0); scanf("%ld", &n);
    
    const int maxNumBits = 30;
    int *array = new int[maxNumBits + 1];
    for(int k = 0; k <= maxNumBits; k++){array[k] = 0;}

    while(n--){
        long number(0); scanf("%ld", &number);
        ++array[findBinaryOnes(number)];
    }

    long long totalSum(0);
    for(int k = 1; k <= maxNumBits; k++){totalSum += (long long)array[k] * (array[k] - 1) / 2;}
    printf("%lld\n", totalSum);
    return 0;
}
