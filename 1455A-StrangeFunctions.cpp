#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << (s.size()) << std::endl;
    }

}
