#include <iostream>

int main(){

    const int N = 26;
    std::string s; getline(std::cin, s);
    long n = s.size();
    long ans = N + (N - 1) * n;
    std::cout << ans << std::endl;

    return 0;
}
