#include <cstdio>
#include <iostream>

bool isSymmetric(char c){return c == 'A' || c == 'H' || c == 'I' || c == 'M' || c == 'O' || c == 'T' || c == 'U' || c == 'V' || c == 'W' || c == 'X' || c == 'Y';}

int main(){

    std::string input(""); getline(std::cin, input);
    std::string output = "YES";
    for(int k = 0; k < (1 + input.size()) / 2; k++){if(!isSymmetric(input[k]) || input[k] != input[input.size() - 1 - k]){output = "NO"; break;}}
    std::cout << output << std::endl;

    return 0;
}
