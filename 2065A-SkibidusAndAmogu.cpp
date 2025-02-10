#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << (s.substr(0, s.size() - 2) + "i") << std::endl;
    }

}
