#include <iostream>

int main(){

    int64_t n; std::cin >> n;
    int64_t total(0);
    total += (((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5;
    total += ((((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5) * (n - 5) / 6;
    total += (((((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5) * (n - 5) / 6) * (n - 6) / 7;
    std::cout << total << std::endl;

    return 0;
}
