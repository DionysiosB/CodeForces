#include <iostream>

int main(){

    int64_t n; std::cin >> n;
    int64_t ans = n * (n - 1) * (n - 2) * (n - 3) * (n - 4) / 120;
    ans *= n * (n - 1) * (n - 2) * (n - 3) * (n - 4);
    std::cout << ans << std::endl;

    return 0;
}
