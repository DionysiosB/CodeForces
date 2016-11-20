#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string first; getline(std::cin, first);
    std::string second; getline(std::cin, second);

    std::vector<long> diff;
    for(long p = 0; p < first.size(); p++){
        if(first[p] != second[p]){diff.push_back(p);}
    }

    if(diff.size() % 2){puts("impossible"); return 0;}

    std::string mid = first;
    long counter = diff.size() / 2;
    for(int p = 0; p < first.size(); p++){
        if(first[p] != second[p] && counter > 0){mid[p] = second[p]; --counter;}
    }

    std::cout << mid << std::endl;

    return 0;
}
