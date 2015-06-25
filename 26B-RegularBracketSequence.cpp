#include <cstdio>
#include <iostream>


int main(){

    std::string input; getline(std::cin, input);

    long unmatched(0), matched(0);

    for(int k = 0; k < input.size(); k++){
        if(input[k] == '('){++unmatched;}
        else if(input[k] == ')' && unmatched > 0){--unmatched; ++matched;}
    }

    std::cout << 2 * matched << std::endl;

    return 0;
}
