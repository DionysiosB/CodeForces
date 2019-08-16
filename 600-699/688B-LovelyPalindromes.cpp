#include <iostream>
#include <algorithm>

int main(){

    std::string a; std::cin >> a;
    std::cout << a;
    std::reverse(a.begin(), a.end());
    std::cout << a;
    std::cout << std::endl;

    return 0;
}
