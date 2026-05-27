#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool res(true);
        bool r(0), g(0), b(0);
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] == 'r'){r = true;}
            else if(s[p] == 'g'){g = true;}
            else if(s[p] == 'b'){b = true;}
            else if(s[p] == 'R' && !r){res = false;}
            else if(s[p] == 'B' && !b){res = false;}
            else if(s[p] == 'G' && !g){res = false;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
