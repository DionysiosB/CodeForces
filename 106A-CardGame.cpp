#include <cstdio>
#include <iostream>
#include <map>

int main(){

    char trump; scanf("%c\n", &trump);
    std::string input; getline(std::cin, input);
    std::string output("NO");

    std::map<char, int> value;
    value.insert(std::pair<char, int>('6', 6));
    value.insert(std::pair<char, int>('7', 7));
    value.insert(std::pair<char, int>('8', 8));
    value.insert(std::pair<char, int>('9', 9));
    value.insert(std::pair<char, int>('T', 10));
    value.insert(std::pair<char, int>('J', 11));
    value.insert(std::pair<char, int>('Q', 12));
    value.insert(std::pair<char, int>('K', 13));
    value.insert(std::pair<char, int>('A', 14));

    if(input[1] == trump && input[4] != trump){output = "YES";}
    else if(input[1] == input[4] && value[input[0]] > value[input[3]]){output = "YES";}

    std::cout << output << std::endl;
    return 0;
}
