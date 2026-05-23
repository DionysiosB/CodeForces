#include <cstdio>
#include <vector>

std::vector<int> digitize(long input){
    std::vector<int> output; 
    do{output.push_back(input%10); input /= 10;} while(input);
    return output;
}

void printDigit(int digit){
    if(digit < 5){printf("O-|");} else{printf("-O|"); digit -= 5;}
    for(int k = 0; k < digit; k++){printf("O");}
    printf("-");
    for(int k = 0; k < 4 - digit; k++){printf("O");}
    printf("\n");
}

int main(){

    long n(0); scanf("%ld", &n);
    std::vector<int> digits = digitize(n);
    for(int k = 0; k < digits.size(); k++){printDigit(digits[k]);}
    return 0;
}
