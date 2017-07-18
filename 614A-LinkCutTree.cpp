#include <iostream>

int main(){

    uint64_t l, r, k; std::cin >> l >> r >> k;

    uint64_t current(1);
    bool inRange(0);
    while(current <= r + 1){
        if(l <= current && current <= r){inRange = 1; std::cout << current << " ";}
        if(r / k < current){break;}
        current *= k;
    }

    if(!inRange){std::cout << (-1);}
    std::cout << std::endl;

    return 0;
}
