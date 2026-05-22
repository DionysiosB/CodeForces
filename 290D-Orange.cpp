#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string input(""); getline(std::cin, input);
    int bound(0); std::cin >> bound;

    for(int k = 0; k < input.size(); k++){
        if('a' <= tolower(input[k]) && tolower(input[k]) < 'a' + bound){printf("%c",toupper(input[k]));}
        else if('a' + bound <= tolower(input[k]) && tolower(input[k]) < 'z' + bound){printf("%c", tolower(input[k]));}
        else{printf("%c", input[k]);}
    }
    puts("");
    return 0;
}
