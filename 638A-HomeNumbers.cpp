#include <iostream>

int main(){

    long n, a; std::cin >> n >> a;
    long ans = 1 + ((a % 2) ? ((a - 1)/2) : ((n - a)/2));
    std::cout << ans << std::endl;

    return 0;
}
