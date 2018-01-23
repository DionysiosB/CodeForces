#include <iostream>

int main(){

    int a, b; std::cin >> a >> b;
    std::cout << (((a + b > 0) && (-1 <= a - b) && (a - b <= 1)) ? "YES" : "NO") << std::endl;
    return 0;
}
