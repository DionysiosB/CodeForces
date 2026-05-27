#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long res = 1 + 25 * (s[0] - 'a') + (s[1] - 'a') - (s[1] > s[0]);
        std::cout << res << std::endl;
    }

}
