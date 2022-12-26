#include <iostream>
#include <algorithm>

int main(){

    std::string s; std::cin >> s;
    std::cout << s; std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}
