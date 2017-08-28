#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::cout << (1 + n * (n + 1) / 2) << std::endl;

    return 0;
}
