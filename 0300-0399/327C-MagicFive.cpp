#include <cstdio>
#include <iostream>

long long moduloPower(long long base, long long power, long long modulo){
    if(power < 0){return 0;}
    if(power == 0){return 1;}
    long long output(0);
    if(power % 2 == 0){output = moduloPower((base * base) % modulo, power/2, modulo); output %= modulo;}
    else{output = base * moduloPower((base * base) % modulo, (power - 1)/ 2, modulo); output %= modulo;}
    return output;
}


int main(){

    std::string number; getline(std::cin, number);
    long long repeats; scanf("%lld", &repeats);
    const long long N = number.size();

    const long long prime(1000000007); long long combinations(0);
    for(long long k = N - 1; k >= 0; k--){
        if(number[k] == '0' || number[k] == '5'){
            for(long long m = 0; m < repeats; m++){
                combinations += moduloPower(2, m * N + k , prime);
                combinations %= prime;
            }
        }
    }
    printf("%lld\n",combinations);

    return 0;
}
