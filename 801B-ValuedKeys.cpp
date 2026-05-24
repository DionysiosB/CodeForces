#include <iostream>

int main(){

    std::string x, y; std::cin >> x >> y;
    std::string z(y);
    bool possible(true);
    for(long p = 0; p < x.size(); p++){if(x[p] < y[p]){possible = false; break;}}
    std::cout << (possible ? z : "-1") << std::endl;

    return 0;
}
