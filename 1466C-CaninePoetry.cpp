#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0);
        if(s[1] == s[0]){++cnt; s[1] = 'X';}
        for(long p = 2; p < s.size(); p++){
            if(s[p - 1] == s[p]){s[p] = 'X'; ++cnt;}
            else if(s[p - 2] == s[p]){s[p] = 'X'; ++cnt;}
        }

        std::cout << cnt << std::endl;
    }

}
