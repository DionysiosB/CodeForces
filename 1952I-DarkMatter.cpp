#include <iostream>

int main(){

    long long a, b; char x; std::cin >> a >> x >> b;
    std::cout << (a + b + ((a * a + b * b) + (a - b) + abs(a) * 2 * b - (a * b + 2))) << std::endl;

}
