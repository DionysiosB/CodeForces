#include <iostream>

int main(){

    std::string s; std::cin >> s;
    int n = (s[s.size() - 1] - '0');
    printf("%d\n", n % 2);

    return 0;
}
