#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){std::cout << 17 << std::endl; break;}
            if(s[p] == '7'){std::cout << 71 << std::endl; break;}
        }
    }

}
