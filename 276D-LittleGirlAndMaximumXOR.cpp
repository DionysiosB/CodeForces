#include <iostream>

int main () {

    int64_t a, b; std::cin >> a >> b;
    int64_t s = a ^ b;
    int64_t d(1);
    while(d <= s){d *= 2;}

    std::cout << (d - 1) << std::endl;

    return 0;
}
