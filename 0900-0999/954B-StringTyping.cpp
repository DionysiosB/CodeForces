#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long rep(0);
    for(long p = 0; 2 * p <= n; p++){if(s.substr(0, p) == s.substr(p, p)){rep = p;}}
    long ans = n - (rep ? (rep - 1) : 0);
    std::cout << ans << std::endl;

    return 0;
}
