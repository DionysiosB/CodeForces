#include <cstdio>
#include <iostream>

long sumOfDigits(long x){
    long output(0);
    while(x > 0){output += x%10; x /= 10;}
    return output;
}

int main(){

    std::string input("");getline(std::cin, input);
    if(input.length() == 1){puts("0");}
    else{
        long current(0), times(1);
        for(long k = 0; k < input.length(); k++){current += input[k] - '0';}
        while(current > 9){current = sumOfDigits(current); ++times;}
        printf("%ld\n", times);
    }
    return 0;
}
