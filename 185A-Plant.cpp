#include <cstdio>

long long findPower(long long base, long long exponent){

    const unsigned long long N = 1000000007;
    if(exponent == 0){return 1;}
    else if(exponent == 1){return base;}
    else{
        unsigned long long output(1);
        while(exponent > 0){
            if(exponent % 2){output *= base; output %= N;}
            base *= base; base %= N;
            exponent /= 2;
        }
        return output;
    }

    return -1;
}


int main(){

    const unsigned long long N = 1000000007;
    unsigned long long n(0); scanf("%lld", &n);
    long long temp = findPower(2, n);
    printf("%llu\n", ((temp * (1 + temp)) / 2) % N);

    return 0;
}
