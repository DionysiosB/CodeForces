#include <cstdio>
#include <cmath>

int sumOfDigits(long long input){
    int output(0);
    while(input > 0){output += input % 10; input /= 10;}
    return output;
}

int main(){

    long long n(0); scanf("%lld", &n);
    long long minTest = sqrt(n) - 9 * 10; if(minTest < 1){minTest = 1;}
    long long maxTest = sqrt(n);

    long long output(-1);
    for(long long test = minTest; test <= maxTest; test++){
        if(n % test == 0 && sumOfDigits(test) == n/test - test){output = test; break;}
    }

    printf("%lld\n", output);

    return 0;
}
