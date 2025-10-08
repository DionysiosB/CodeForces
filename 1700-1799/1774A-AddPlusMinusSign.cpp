#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long t(s[0] == '1');
        for(long p = 1; p < s.size(); p++){
            if(s[p] == '0'){std::cout << '+';}
            else if(t > 0){std::cout << '-'; t = 0;}
            else if(t == 0){std::cout << '+'; t = 1;}
        }

        std::cout << std::endl;
    }

}
