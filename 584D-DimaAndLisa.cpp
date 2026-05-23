#include <cstdio>
#include <cmath>

bool isPrime(long x){

    if(x <= 1){return 0;}
    long a = sqrt(x);
    for(long p = 2; p <= a; p++){if(x % p == 0){return false;}}
    return true;
}

int main(){

    long n; scanf("%ld\n", &n);
    if(isPrime(n)){printf("1\n%ld\n", n); return 0;}
    if(isPrime(n - 2)){printf("2\n2 %ld\n", n - 2); return 0;}

    for(long p = 2; p < n; p += 2){
        if(!isPrime(n - p)){continue;}
        for(long q = 2; q < p; q++){
            if(!isPrime(q) || !isPrime(p - q)){continue;}
            printf("3\n%ld %ld %ld\n", n - p, p - q, q);
            return 0;
        }
    }


    return 0;
}
