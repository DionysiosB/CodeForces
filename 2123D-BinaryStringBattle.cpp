#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += (s[p] == '1');}
        std::cout << (cnt <= k || n < 2 * k ? "Alice" : "Bob") << std::endl;
    }

}
