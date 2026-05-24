#include <iostream>

int main(){

    int64_t n; std::cin >> n;
    int64_t x = n + 2 * n * (n - 1) + n * (n - 1) * (n - 2) + n * (((n - 1) * (n - 2) / 2) * (n - 3) / 3) + ((((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5);
    int64_t y = n + n * (n - 1) + n * (n - 1) * (n - 2) / 6;
    int64_t ans = x * y;
    std::cout << ans << std::endl;

    return 0;
}
