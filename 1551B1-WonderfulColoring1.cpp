#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cnt[26] = {0};
        for(long p = 0; p < s.size(); p++){++cnt[s[p] - 'a'];}
        long x(0), y(0);
        for(long p = 0; p < 26; p++){
            if(cnt[p] == 1){++x;}
            else if(cnt[p] > 1){++y;}
        }
        std::cout << (x / 2 + y) << std::endl;
    }

}
