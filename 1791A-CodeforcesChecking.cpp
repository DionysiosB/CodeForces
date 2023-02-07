#include <iostream>

int main(){

    std::string target = "codeforces";
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << ((target.find(s) != std::string::npos) ? "YES" : "NO") << std::endl;
    }

}
