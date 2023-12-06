#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(n - 1);
        for(long p = 0; cnt > 0 && s[p] == 'B' && p < s.size(); p++){--cnt;}
        for(long p = n - 1; cnt > 0 && s[p] == 'A' && p >= 0; p--){--cnt;}
        std::cout << cnt << std::endl;
    }

}
