#include <iostream>

int main(){

    long x; std::cin >> x;
    long ans = (x / 5) + 1 - (x % 5 == 0);
    std::cout << ans << std::endl;

    return 0;
}
