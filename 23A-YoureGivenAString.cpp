#include <cstdio>
#include <iostream>
#include <set>

int main(){

    std::string input; getline(std::cin, input);
    int output(0);

    for(size_t length = input.size() - 1; length >= 1; length--){
        if(output > 0){break;}
        std::set<std::string> present;

        for(size_t start = 0; start < input.size() - length + 1; start++){
            std::string current = input.substr(start, length);
            if(present.find(current) == present.end()){present.insert(current);}
            else{output = length; break;}
        }
    }

    std::cout << output << std::endl;

    return 0;
}
