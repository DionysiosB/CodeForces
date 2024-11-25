#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::cout << "1 1" << std::endl << std::flush;
        long x; std::cin >> x;
        std::cout << "1 01" << std::endl << std::flush;
        long y; std::cin >> y;
        std::cout << "1 11" << std::endl << std::flush;
        long z; std::cin >> z;
        std::cout << "0 1 " << (x == y + z + 1 ? "1" : "0") << std::endl << std::flush;
        long res; std::cin >> res;  //Get the output
    }

    return 0;
}
