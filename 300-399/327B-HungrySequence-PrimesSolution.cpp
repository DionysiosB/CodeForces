#include <cstdio>
#include <iostream>

int main(){

    const int limitFactor = 8;
    const int firstMissing = 20;
    const long upperBound = 10000000;
    long n; scanf("%ld\n", &n);

    long arraySize = std::min(upperBound, limitFactor * n);
    bool *array = new bool[arraySize + 1];

    for(long k = 0; k <= firstMissing ; k++){array[k] = 0;}
    for(long k = firstMissing + 1; k < arraySize; k++){array[k] = 1;}
    for(long k = 0; k < arraySize; k++){if(array[k]){for(int m = 2; k * m < arraySize; m++){array[m * k] = 0;}}}


    long remaining = n;
    for(long k = 0; k < arraySize; k++){
        if(array[k]){
            printf("%ld ", k);
            --remaining;
            if(!remaining){break;}
        }
    }

    return 0;
}
