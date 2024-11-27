#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string ans("-1");
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] == s[p]){ans = s.substr(p - 1, 2); break;}
            else if(p > 1 && s[p - 2] != s[p - 1] && s[p - 2] != s[p] && s[p - 1] != s[p]){ans = s.substr(p - 2, 3); break;}
        }

        std::cout << ans << std::endl;
    }

}
