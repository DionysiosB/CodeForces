#include <iostream>
#include <cmath>

int main(){

    long n; std::cin >> n; 
    long a = 0;
    while(a * (a + 1) * (a + 2) <= 6 * n){++a;}; --a;
    std::cout << a << std::endl;
    return 0;
}
