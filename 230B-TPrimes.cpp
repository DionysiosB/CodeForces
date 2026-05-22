#include <cstdio>
#include <iostream>
#include <cmath>

int main(){

    const long maxLimit = 1000000;  //The sqrt of 10^12
    long n; scanf("%ld\n", &n);
    int64_t *array = new int64_t[n];
    for(int k = 0; k < n; k++){scanf("%lld", array + k);}

    bool primes[maxLimit + 1];
    primes[0] = primes[1] = 0; for(long k = 2; k <= maxLimit; k++){primes[k] = 1;}
    for(long k = 2; k <= sqrt(maxLimit); k++){if(primes[k]){for(int m = 2; m <= maxLimit / k; m++){primes[m * k] = 0;}}}

    int64_t inputRoot(0);
    for(long k = 0; k < n; k++){
        inputRoot = sqrt(array[k]);
        if(primes[inputRoot] && inputRoot * inputRoot == array[k]){printf("YES\n");}
        else{printf("NO\n");}
    }
    
    return 0;
}
