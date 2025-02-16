#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(2 * (s[0] == '1') - (s.back() == '1'));
        for(size_t p = 1; p < n; p++){cnt += 2 * (s[p - 1] == '0'  && s[p] == '1');}
        std::cout << cnt << std::endl;
    }


}
