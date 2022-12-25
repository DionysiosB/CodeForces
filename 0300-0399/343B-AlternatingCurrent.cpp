#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string input; getline(std::cin, input);
    std::vector<char> state;
    for(long p = 0; p < input.size(); p++){
        if(!state.empty() && state.back() == input[p]){state.pop_back();}
        else{state.push_back(input[p]);}
    }

    puts(state.empty() ? "Yes" : "No");

    return 0;
}
