#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string x; std::cin >> x;
        bool res = (x.size() > 2) && (x[0] == '1') && (x[1] == '0') && (x[2] != '0') && (x != "101");
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
