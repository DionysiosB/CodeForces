#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long ans(-1);
        for(long p = 0; p < s.size(); p++){ans += ((!p && s[p] == '1') || (p && s[p] != s[p - 1]));}
        std::cout << (ans > 0 ? ans : 0) << std::endl;
    }

}
