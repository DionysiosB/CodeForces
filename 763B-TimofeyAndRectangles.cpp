#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::cout << "YES" << std::endl;
    while(n--){
        long x, y, z, w; std::cin >> x >> y >> z >> w;
        x = ((x % 2) + 2)% 2;
        y = ((y % 2) + 2)% 2;
        std::cout << (2 * x + y + 1) << std::endl;
    }

    return 0;
}
