#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(n - 1);
        for(long p = 2; p < n; p++){cnt -= (s[p] == s[p - 2]);}
        std::cout << cnt << std::endl;
    }

}
