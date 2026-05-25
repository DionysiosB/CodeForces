#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 0; p < s.size() - 10; p++){cnt += (s[p] == '8');}
    long trn = (s.size() - 11) / 2;
    std::cout << (trn < cnt ? "YES" : "NO") << std::endl;

    return 0;
}
