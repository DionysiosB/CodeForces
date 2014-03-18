#include <cstdio>
#include <cmath>

int main(){

    long n(0); scanf("%ld", &n);
    bool *primes = new bool[n + 1];
    primes[0] = primes[1] = 0; for(long k = 2; k <= n; k++){primes[k] = 1;}
    for(long k = 2; k <= sqrt(n); k++){
        if(!primes[k]){continue;}
        for(int m = 2 * k; m <= n; m += k){primes[m] = 0;}
    }

    long k(2), current(n);
    printf("%ld ", current);
    while(current > 1 && k <= n){
        if(!primes[k]){++k; continue;}
        if(current % k == 0){current /= k; printf("%ld ", current);}
        else{++k;}
    }
    printf("\n");    
    return 0;
}
