#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);
    std::string output("");

    char current = 'a';
    for(int p = input.size() - 1; p >= 0; p--){
        if(input[p] >= current){
            output = input[p] + output;
            current = input[p];
        }
    }

    std::cout << output << std::endl;


    return 0;
}
