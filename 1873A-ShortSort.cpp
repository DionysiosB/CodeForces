#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << ((s == "bca" || s == "cab") ? "NO" : "YES") << std::endl;
    }

}
