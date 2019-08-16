#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t n; std::cin >> n;

    int64_t total(0), smallestOdd(0);
    while(n--){
        int64_t x; std::cin >> x; 
        total += x;
        if((x % 2) && (smallestOdd == 0 || x < smallestOdd) ){smallestOdd = x;}
    }

    if(total % 2){total -= smallestOdd;}
    std::cout << total << std::endl;

    return 0;
}
