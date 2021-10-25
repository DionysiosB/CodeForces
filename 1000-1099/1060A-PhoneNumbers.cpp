#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 11;
    long len; std::string s; std::cin >> len >> s;
    long eights(0); for(long p = 0; p < s.size(); p++){eights += (s[p] == '8');}
    long ans = (s.size() / N);
    ans = (ans < eights) ? ans : eights;
    std::cout << ans << std::endl;

    return 0;
}
