#include <iostream>

int main() {

    long t; std::cin >> t;
    while (t--) {
        long n; std::cin >> n;
        if(n == 1){std::cout << "a" << std::endl; continue;}
        std::cout << std::string(n / 2, 'a') + (n & 1 ? "bc" : "b") + std::string(n / 2 - 1, 'a') << std::endl;
    }

}
