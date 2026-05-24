#include <iostream>

int main(){

    int64_t m, b; std::cin >> m >> b;
    int64_t ans(0);
    for(int64_t y = 0; y <= b; y++){
        int64_t x = m * (b - y);
        int64_t cur = (x + y) * (x + 1) * (y + 1) / 2;
        ans = (ans > cur) ? ans : cur;
    }

    std::cout << ans << std::endl;

    return 0;
}
