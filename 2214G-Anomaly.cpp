#include <iostream>

int main() {
    std::string s("bigchadjeff");
    long  t; std::cin >> t;
    while(t--) {
        int idx; std::cin >> idx;
        std::cout << s[idx - 1] << std::endl;
    }

}
