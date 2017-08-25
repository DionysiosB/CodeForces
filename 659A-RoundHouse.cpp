#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, a, b; std::cin >> n >> a >> b;
    long ans = 1 + (n + (a - 1 + b) % n) % n;
    std::cout << ans << std::endl;

    return 0;
}
