#include <cstdio>

long long findPower(long long base, long long exponent, long long modulo){

    if(exponent == 0){return 1;}
    else if(exponent == 1){return base;}
    else{
        unsigned long long output(1);
        while(exponent > 0){
            if(exponent % 2){output *= base; output %= modulo;}
            base *= base; base %= modulo;
            exponent /= 2;
        }
        return output;
    }

    return -1;
}


int main(){

    long long n, m; scanf("%lld %lld", &n, &m);
    printf("%lld\n", (m - 1 + findPower(3, n, m)) % m);
    return 0;
}
