#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long z(-1), a(-1);
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] == '0' && s[p] == '0'){z = p;}
            if(s[p - 1] == '1' && s[p] == '1' && a < 0){a = p;}
        }

        bool res = !(z > 0 && a > 0 && z > a);
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
