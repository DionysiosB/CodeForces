#include <iostream>

int main(){

    long n; std::string s; std::cin >> n >> s;
    long count(1);
    for(long p = 1; p < s.size(); p++){count += (s[p] != s[p - 1]);}
    long ans = (s.size() < (count + 2)) ? s.size() : (count + 2);
    std::cout << ans << std::endl;

    return 0;
}
