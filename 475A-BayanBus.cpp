#include <cstdio>
#include <iostream>
#include <vector>


int main(){

    std::string top     = "+------------------------+\n";
    std::string first   = "|#.#.#.#.#.#.#.#.#.#.#.|D|)\n";
    std::string second  = "|#.#.#.#.#.#.#.#.#.#.#.|.|\n";
    std::string aisle   = "|#.......................|\n";
    std::string third   = "|#.#.#.#.#.#.#.#.#.#.#.|.|)\n";
    std::string bottom  = "+------------------------+";

    int k; std::cin >> k; 

    if(k >= 3){aisle[1] = 'O'; --k;}

    int a, b, c; a = b = c = 1;
    while(k > 0){
        first[a]  = 'O';  a += 2; --k; if(!k){break;}
        second[b] = 'O';  b += 2; --k; if(!k){break;}
        third[c]  = 'O';  c += 2; --k; if(!k){break;}
    }

    std::cout << top << first << second << aisle << third << bottom;

    return 0;
}
