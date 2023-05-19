#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool same(true);
        long res(s.size() - 1);
        for(long p = 1; same && p < s.size(); p++){if(s[p] != s[0]){same = false;}}
        if(same){res = -1;}
        std::cout << res << std::endl;
    }

}
