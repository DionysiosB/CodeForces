#include <cstdio>
#include <iostream>

int main(){

    std::string number; getline(std::cin, number);

    if(number[0] > '4' && number[0] != '9'){number[0] = '0' + 9 - (number[0] - '0');}
    for(int p = 1; p < number.size(); p++){
        if(number[p] > '4'){number[p] = '0' + 9 - (number[p] - '0');}
    }

    std::cout << number << std::endl;

    return 0;
}
