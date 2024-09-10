#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string x, y; std::cin >> x >> y;
        long a; for(a = 0; a < y.size() && y[y.size() - 1 - a] == '0'; a++);
        long b; for(b = 0; b < x.size() && x[x.size() - 1 - a - b] == '0'; b++);
        std::cout << b << std::endl;
    }

}
