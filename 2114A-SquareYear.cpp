#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long y = 1000 * (s[0] - '0') + 100 * (s[1] - '0') + 10 * (s[2] - '0') + (s[3] - '0');
        long a(-1);
        for(long p = 0; p * p <= y; p++){if(p * p == y){a = p; break;}}
        std::cout << a << (a >= 0 ? " 0" : "") << std::endl;
    }

}
