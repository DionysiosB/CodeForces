#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::cout << (s[0] != s.back() ? "YES" : "NO") << std::endl;
    }

}
