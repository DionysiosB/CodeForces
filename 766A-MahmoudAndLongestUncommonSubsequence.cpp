#include <iostream>

int main(){

    std::string s, t; std::cin >> s >> t;
    if(s == t){std::cout << "-1" << std::endl;}
    else{std::cout << ( (s.size() > t.size()) ? s.size() : t.size()) << std::endl;}

    return 0;
}
