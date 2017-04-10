#include <iostream>

int main(){

    int64_t d1, d2, d3;
    std::cin >> d1 >> d2 >> d3;
    int64_t dist = d1 + d2 + d3;
    dist = std::min(dist, 2 * d1 + 2 * d2);
    dist = std::min(dist, 2 * d1 + 2 * d3);
    dist = std::min(dist, 2 * d2 + 2 * d3);
    std::cout << dist << std::endl;
    return 0;
}
