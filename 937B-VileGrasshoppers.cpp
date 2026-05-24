#include <cstdio>
#include <vector>

bool checkPrime(long x, long a){
    for(long p = 2; p <= a && p * p <= x; p++){if(x % p == 0){return false;}}
    return true;
}

int main(){

    long a, y; scanf("%ld %ld", &a, &y);
    long res(-1);
    for(long p = y; p > a; p--){if(checkPrime(p, a)){res = p; break;}}
    printf("%ld\n", res);

    return 0;
}
