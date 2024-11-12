#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        for(long p = 0; p < 8; p++){
            std::string u("");
            u += ('a' + p);
            u += s[1];
            if(u == s){continue;}
            std::cout << u << std::endl;
        }
        for(long p = 0; p < 8; p++){
            std::string u("");
            u += s[0];
            u += ('1' + p);
            if(u == s){continue;}
            std::cout << u << std::endl;
        }
    }

}
