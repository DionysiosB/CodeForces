#include <iostream>
#include <algorithm>

int main(){

    long x1, y1; std::cin >> x1 >> y1;
    long x2, y2; std::cin >> x2 >> y2;
    std::cout << std::max(std::abs(x1 - x2), std::abs(y1 - y2)) << std::endl;

    return 0;
}
