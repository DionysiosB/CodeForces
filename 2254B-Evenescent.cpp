#include <iostream>
 
int main() {
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(1 + (s[n - 2] != s[n - 1]));
        bool rs(false), rd(false);
        for(long p = 1; p + 1 < s.size(); p++){
            cnt += (s[p - 1] != s[p]);
            if(s[p - 1] != s[p] && s[p] != s[p + 1]){
                rs = true;
                if(s[p - 1] == s[p + 1]){rd = true;}
            }
        }
        
        std::cout << (cnt - rs - rd) << std::endl;
    }
 
}
