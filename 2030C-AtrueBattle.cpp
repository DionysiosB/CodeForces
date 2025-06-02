#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool win(false);
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] == '0'){continue;}
            if(p == 0 || p == n - 1 || s[p - 1] == s[p]){win = true;}
        }

        std::cout << (win ? "YES" : "NO") << std::endl;
    }

}
