#include <iostream>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::cout << s; reverse(s.begin(), s.end());
        std::cout << s << std::endl;
    }

}
