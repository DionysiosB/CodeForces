#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        char c; std::cin >> c;
        bool res(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] != c){continue;}
            if(p % 2 == 0){res = true; break;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
