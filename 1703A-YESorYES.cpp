#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool res(true);
        if(s[0] != 'Y' && s[0] != 'y'){res = false;}
        if(s[1] != 'E' && s[1] != 'e'){res = false;}
        if(s[2] != 'S' && s[2] != 's'){res = false;}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }


}
