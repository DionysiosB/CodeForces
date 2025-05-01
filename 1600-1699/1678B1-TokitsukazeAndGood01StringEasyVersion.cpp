#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long cnt(0);
        for(long p = 0; p < s.size(); p += 2){
            if(s[p] != s[p + 1]){++cnt; s[p + 1] = s[p];}
        }

        std::cout << cnt << std::endl;
    }

}
