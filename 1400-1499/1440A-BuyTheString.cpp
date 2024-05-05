#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, cz, cn, h; std::cin >> n >> cz >> cn >> h;
        cz = (cz < (cn + h)) ? cz : (cn + h);
        cn = (cn < (cz + h)) ? cn : (cz + h);
        std::string s; std::cin >> s;
        long total(0);
        for(long p = 0; p < s.size(); p++){total += (s[p] == '0') ? cz : cn;}
        std::cout << total << std::endl;
    }
}
