#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);

    int numLarge(0), numSmall(0), numDigits(0);

    for(int k = 0; k < input.size(); k++){
        if('a' <= input[k] && input[k] <= 'z'){++numSmall;}
        else if('A' <= input[k] && input[k] <= 'Z'){++numLarge;}
        else if('0' <= input[k] && input[k] <= '9'){++numDigits;}
    }

    std::string output = "Too weak";
    if(input.size() >= 5 && numSmall > 0 && numLarge > 0 && numDigits > 0){output = "Correct";}

    std::cout << output << std::endl;

    return 0;
}
