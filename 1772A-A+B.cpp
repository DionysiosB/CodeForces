#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << (s[0] - '0' + s[2] - '0') << std::endl;
    }

}
