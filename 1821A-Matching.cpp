#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long res(1);
        if(s[0] == '?'){res = 9;}
        else if(s[0] == '0'){res = 0;}

        for(long p = 1; p < s.size(); p++){res *= (s[p] == '?') ? 10 : 1;}
        std::cout << res << std::endl;
    }

}
