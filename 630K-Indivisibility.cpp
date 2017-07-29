#include <iostream>

int main(){

    int64_t n; std::cin >> n;
    int64_t res = n - (n/2 + n/3 + n/5 + n/7) + (n/6 + n/10 + n/14 + n/15 + n/21 + n/35) - (n/30 + n/42 + n/70 + n/105) + (n/210);
    std::cout << res << std::endl;

    return 0;
}
