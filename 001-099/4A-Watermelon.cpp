#include <iostream>

int main(){
    int w = 0; std::cin >> w;
    std::string output = (w <= 2 || w % 2) ? "NO" : "YES";
    std::cout << output << std::endl;
    return 0;
}
