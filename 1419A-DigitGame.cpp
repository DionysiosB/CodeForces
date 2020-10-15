#include <iostream>

int main() {
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool turn(!(n % 2)), win(false);
        for(long p = turn; !win && p < s.length(); p += 2){win |= ((s[p]) % 2 == !turn);}
        std::cout << (2 - (turn ^ win)) << std::endl;
    }

    return 0;
}

