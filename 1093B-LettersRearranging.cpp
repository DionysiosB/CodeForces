#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long diff(-1);
        for(long p = 0; p < s.size(); p++){if(s[p] != s[0]){diff = p; break;}}
        if(diff < 0){std::cout << "-1" << std::endl;}
        else{
            if(s[0] == s[s.size() - 1]){char tmp = s[0]; s[0] = s[diff]; s[diff] = tmp;}
            std::cout << s << std::endl;
        }
    }

    return 0;
}
