#include <iostream>

int main() {

    std::string s; std::cin >> s;
    int count = 1;
    for (int p = 1; p < s.size(); p++){count += (s[p] == '0') ? 9 : (s[p] - '0');}
    std::cout << count << std::endl;
}
