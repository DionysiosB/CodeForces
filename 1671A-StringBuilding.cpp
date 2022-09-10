#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt(0); bool ans(true);
        for(long p = 0; p < s.size(); p++){
            ++cnt;
            if(p + 1 >= s.size() || s[p + 1] != s[p]){
                if(cnt < 2){ans = false; break;}
                cnt = 0;
            }
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}
