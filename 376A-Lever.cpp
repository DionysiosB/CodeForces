#include <cstdio>
#include <iostream>
#include <string>


int main(){

    std::string input(""); getline(std::cin, input);
    long long leverPos = input.find('^');
    long long left(0), right(0);

    for(int k = 0; k < leverPos; k++){if(input[k] != '='){left += (leverPos - k) * (input[k] - '0');}}
    for(int k = leverPos + 1; k < input.size(); k++){if(input[k] != '='){right += (k - leverPos) * (input[k] - '0');}}
    
    if(left == right){std::cout << "balance" << std::endl;}
    else if(left < right){std::cout << "right" << std::endl;}
    else{std::cout << "left" << std::endl;}

    return 0;
}
