#include <iostream>

int main(){

    const int N = 6;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::string f[N] = {"BGR", "BRG", "GBR", "GRB", "RBG", "RGB"};

    long mn(s.size() + 1); std::string pattern = "";
    for(long p = 0; p < 6; p++){
        std::string cur = f[p];
        long cnt(0);
        for(long q = 0; q < s.size(); q++){cnt += (s[q] != cur[q % 3]);}
        if(cnt < mn){mn = cnt; pattern = cur;}

    }

    std::cout << mn << std::endl;
    for(long p = 0; p < s.size(); p++){std::cout << pattern[p % 3];}
    std::cout << std::endl;

    return 0;
}
