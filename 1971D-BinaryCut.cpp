#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long r(0), d(0);
        for(long p = 1; p < s.size(); p++){
            r += (s[p - 1] == '0' && s[p] == '1');
            d += (s[p - 1] == '1' && s[p] == '0');
        }

        std::cout << (r - (r > 0) + d + 1) << std::endl;
    }

}
