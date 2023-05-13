#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool res(false);
        for(long p = 1; p < s.size() / 2; p++){
            if(s[p] != s[0]){res = true; break;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
