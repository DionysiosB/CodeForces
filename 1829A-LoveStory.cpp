#include <iostream>

int main(){

    long t; std::cin >> t;
    const std::string w = "codeforces";
    while(t--){
        std::string s; std::cin >> s;
        long res(0);
        for(long p = 0; p < w.size() && p < s.size(); p++){
            res += (w[p] != s[p]);
        }

        std::cout << res << std::endl;
    }

}
