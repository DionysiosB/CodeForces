#include <iostream>
 
int main(){
 
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::cout << (1 - (s.find("2026") != std::string::npos || s.find("2025") == std::string::npos)) << std::endl;
    }
 
}
