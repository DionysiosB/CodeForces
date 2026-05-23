#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    std::string number; getline(std::cin, number);
    std::string digits; getline(std::cin, digits);
    sort(digits.rbegin(), digits.rend());
    long index = 0;
    for(long p = 0; p < number.size(); p++){
        if(index >= digits.size()){break;}
        if(number[p] < digits[index]){number[p] = digits[index]; ++index;}
    }

    std::cout << number << std::endl;

    return 0;
}
