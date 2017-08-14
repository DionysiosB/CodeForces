#include <iostream>

int main(){

    int64_t n, k; std::cin >> n >> k;

    if(k >= n / 2){std::cout << (n * (n - 1) / 2) << std::endl;}
    else{std::cout << (k * (2 * n - 2 * k - 1)) << std::endl;}

    return 0;
}
