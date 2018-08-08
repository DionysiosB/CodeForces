#include <iostream>

int main(){

    int64_t n, k; std::cin >> n >> k;
    int64_t a = (n / 2) / (k + 1);
    int64_t b = k * a;
    int64_t c = n - a - b;
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
