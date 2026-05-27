#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        if(s[0] != s.back()){s[0] = s.back();}
        std::cout << s << std::endl;
    }

}
