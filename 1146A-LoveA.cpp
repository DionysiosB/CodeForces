#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 0; p < s.size(); p++){cnt += (s[p] == 'a');}
    long ans(2 * cnt - 1); ans = (s.size() < ans) ? s.size() : ans;
    std::cout << ans << std::endl;

    return 0;
}
