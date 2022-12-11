#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);

    size_t index = 0;
    while(index < input.size()){
        if(input[index] == '.'){printf("0");}
        else if(input[index]== '-' && input[index + 1] == '.'){printf("1"); ++index;}
        else if(input[index]== '-' && input[index + 1] == '-'){printf("2"); ++index;}
        ++index;
    }

    return 0;
}
