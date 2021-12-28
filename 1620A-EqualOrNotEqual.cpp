#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += s[p] == 'N';}
        std::cout << (cnt != 1 ? "YES" : "NO") << std::endl;
    }

}
