#include <cstdio>
#include <cmath>
#include <algorithm>

int main(){

    long n(0); scanf("%ld\n", &n);
    int numDigits = 1 + log10(n);

    if(numDigits % 2 == 1){
        for(int k = 0; k < (numDigits + 1)/2; k++){printf("4");}
        for(int k = 0; k < (numDigits + 1)/2; k++){printf("7");}
    }
    else{
        long long upperBound = 0;
        for(int k = 0; k < numDigits / 2; k++){upperBound = 10 * upperBound + 7;}
        for(int k = 0; k < numDigits / 2; k++){upperBound = 10 * upperBound + 4;}

        if(n > upperBound){
            numDigits += 2;
            for(int k = 0; k < (numDigits + 1)/2; k++){printf("4");}
            for(int k = 0; k < (numDigits + 1)/2; k++){printf("7");}
        }
        else{
            int * digits = new int[numDigits];
            for(int k = 0; k < numDigits / 2; k++){digits[k] = 4;}
            for(int k = numDigits / 2; k < numDigits; k++){digits[k] = 7;}

            long long minSuperlucky = upperBound;

            do{
                long long testNumber(0);
                for(int k = 0; k < numDigits; k++){testNumber = 10 * testNumber + digits[k];}
                if(testNumber >= n && testNumber < minSuperlucky){minSuperlucky = testNumber;}
            }while(std::next_permutation(digits,digits + numDigits));

            printf("%lld\n", minSuperlucky);
        }
    }

    return 0;
}
