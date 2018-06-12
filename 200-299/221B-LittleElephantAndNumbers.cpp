#include <cstdio>
#include <vector>
#include <cmath>

bool commonDigits(long a, long b){

    bool digits[10] = {0};
    bool output(0);
    while(a > 0){digits[a%10] = 1; a /= 10;}
    while(b > 0){if(digits[b%10]){output = 1; break;}; b /= 10;}
    return output;
}

int main(){

    long n(0); scanf("%ld", &n);
    long total(0);
    std::vector<long> divisors;
    for(long k = 1; k <= sqrt(n); k++){
        if(n % k == 0){
            divisors.push_back(k); 
            if(n/k > k){divisors.push_back(n/k);}
        }
    }
    for(long k = 0; k < divisors.size(); k++){if(commonDigits(n,divisors[k])){++total;}}
    printf("%ld\n", total);
    return 0;
}
