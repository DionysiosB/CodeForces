#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    for(long p = 0; p < n; p++){std::string s; std::cin >> s;}
    std::cout << (n - 1) << std::endl;

}
