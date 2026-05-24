#include <cstdio>
#include <vector>

bool checkPrime(long x, long a){

    if((a >= 2) && (x % 2 == 0)){return 0;}
    if((a >= 3) && (x % 3 == 0)){return 0;}
    if((a >= 5) && (x % 5 == 0)){return 0;}
    if((a >= 7) && (x % 7 == 0)){return 0;}
    if((a >= 11) && (x % 11 == 0)){return 0;}
    if((a >= 13) && (x % 13 == 0)){return 0;}
    if((a >= 17) && (x % 17 == 0)){return 0;}
    if((a >= 19) && (x % 19 == 0)){return 0;}

    for(long p = 23; p <= a && p * p <= x; p += 2){
        if(p % 2 == 0 || p % 3 == 0 || p % 5 == 0 || p % 7 == 0 || p % 11 == 0 || p % 13 == 0 || p % 17 == 0 || p % 19 == 0){continue;}
        if(x % p == 0){return false;}
    }
    return true;
}



int main(){

    long a, y; scanf("%ld %ld", &a, &y);
    long res(-1);
    for(long p = y; p > a; p--){if(checkPrime(p, a)){res = p; break;}}
    printf("%ld\n", res);

    return 0;
}
