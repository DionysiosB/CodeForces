#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long res(0);
        for(long p = 0; p < s.size(); p++){
            res += (s[p] - '0');
            if((p < s.size() - 1) && (s[p] > '0')){++res;}
        }
        std::cout << res << std::endl;
    }

}
