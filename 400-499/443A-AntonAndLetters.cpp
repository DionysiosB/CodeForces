#include <cstdio>
#include <iostream>
#include <set>

int main(){

    std::string input; getline(std::cin, input);
    std::set<char> letters;
    for(int k = 1; k < input.size(); k += 3){if('a' <= input[k] && input[k] <= 'z'){letters.insert(input[k]);}}
    printf("%ld\n", letters.size());

    return 0;
}
