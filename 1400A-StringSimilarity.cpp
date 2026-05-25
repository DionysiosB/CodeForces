#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::string h(n, s[n - 1]);
        std::cout << h << std::endl;
    }

    return 0;
}
