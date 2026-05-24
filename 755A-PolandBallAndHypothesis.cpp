#include <cstdio>

bool isPrime(long x){
    for(long p = 2; p * p <= x; p++){if(x % p == 0){return false;}}
    return true;
}


int main(){

    long n; scanf("%ld", &n);
    for(long m = 1; m <= 1000; m++){
        long test = n * m + 1;
        if(!isPrime(test)){printf("%ld\n", m); break;}
    }

    return 0;
}
