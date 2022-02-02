#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long a(0), b(0), c(0);
        for(long p = 0; p < s.size(); p++){
            a += (s[p] == 'A');
            b += (s[p] == 'B');
            c += (s[p] == 'C');
        }

        std::cout << (b == a + c ? "YES" : "NO") << std::endl;
    }

}
