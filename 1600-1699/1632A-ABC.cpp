#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool res = (n > 2) || (s == "00") || (s == "11");
        std::cout << (res ? "NO" : "YES") << std::endl;


    }

}
