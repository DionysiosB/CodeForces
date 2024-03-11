#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long a(0), b(0);
        for(long p = 0; p < s.size(); p++){
            a += (s[p] == 'A');
            b += (s[p] == 'B');
        }

        std::cout << (a > b ? 'A' : 'B') << std::endl;

    }

}
