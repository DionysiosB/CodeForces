#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string input; getline(std::cin, input);

    long total(0);
    for(int k = 0; k < input.size(); k++){total += (input[k] == 'x') ? 1 : -1;}
    char output = (total > 0) ? 'x' : 'y';
    if(total < 0){total = -total;}
    for(int k = 0; k < total; k++){printf("%c", output);}
    puts("");

    return 0;
}
