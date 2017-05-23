#include <iostream>

int main(){

    std::string number; getline(std::cin, number);
    long zeros(1), ones(0);
    for(long p = 0; p < number.size(); p++){
        long current = std::min(zeros, ones);
        if(number[p] == '0'){zeros = 1 + current;}
        else if(number[p] == '1'){ones = 1 + current;}
    }

    std::cout << ones << std::endl;

    return 0;
}
