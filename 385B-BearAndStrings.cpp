#include <cstdio>
#include <iostream>
#include <string>

int main(){


    const std::string name("bear");
    std::string input("");getline(std::cin, input);

    int searchStart(0), found(0);
    long total(0);
    while(found != std::string::npos){
        found = input.find(name, searchStart);
        if(found != std::string::npos){
            total += (found - searchStart + 1) * (input.size() - found - name.size() + 1);
            searchStart = found + 1;
        }
    }

    printf("%ld\n", total);

    return 0;
}
