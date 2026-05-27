#include <iostream>

int main(){


    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long n = s.size();
        long mod(0);
        for(long p = 0; p < n; p++){mod = 10 * mod + (s[p] - '0'); mod %= 7;}
        s[n - 1] = (s[n - 1] >= (mod + '0')) ? (s[n - 1] - mod) : (s[n - 1] + 7 - mod);
        std::cout << s << std::endl;
    }

}
