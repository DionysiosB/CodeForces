#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt((s[0] == '_') + (s.back() == '_') + (s == "^"));
        for(long p = 1; p < s.size(); p++){cnt += (s[p - 1] == '_' && s[p] == '_');}
        std::cout << cnt << std::endl;
    }

}
