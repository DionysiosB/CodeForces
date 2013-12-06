#include <cstdio>
#include <iostream>
#include <map>

int main(){

    std::map<char,long> commands;
    commands.insert(std::pair<char,long>('>',8));
    commands.insert(std::pair<char,long>('<',9));
    commands.insert(std::pair<char,long>('+',10));
    commands.insert(std::pair<char,long>('-',11));
    commands.insert(std::pair<char,long>('.',12));
    commands.insert(std::pair<char,long>(',',13));
    commands.insert(std::pair<char,long>('[',14));
    commands.insert(std::pair<char,long>(']',15));

    std::string input; getline(std::cin, input);
    const int multiplier = 16;
    const int divisor  = 1000003;
    long total(0);

    for(int k = 0; k < input.size(); k++){
        total = multiplier * total + commands[input[k]];
        total %= divisor;
    }

    printf("%ld\n", total);
    return 0;
}
