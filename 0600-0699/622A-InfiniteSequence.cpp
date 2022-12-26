#include <iostream>
#include <cmath>

int main(){

    int64_t n; std::cin >> n;
    int64_t a = (-1 + sqrt(1 + 8 * n)) / 2;
    n -= a * (a + 1) / 2;
    std::cout << ((n > 0) ? n : a) << std::endl;

    return 0;
}
