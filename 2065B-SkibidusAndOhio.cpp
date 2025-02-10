#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool same(false);
        for(size_t p = 0; !same && p < s.size(); p++){same = (s[p - 1] == s[p]);}
        std::cout << (same ? 1 : s.size()) << std::endl;
    }

}
