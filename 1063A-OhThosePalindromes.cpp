#include <iostream>
#include <algorithm>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    sort(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}
