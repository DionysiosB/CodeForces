#include <iostream>

int main(){

    long n, a, b; std::cin >> n >> a >> b;
    std::string s; std::cin >> s;
    --a; --b;
    std::cout << ((s[a] == s[b]) ? 0 : 1) << std::endl;

    return 0;
}
