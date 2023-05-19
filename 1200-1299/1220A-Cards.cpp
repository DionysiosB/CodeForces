#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long z(0), a(0);
    for(long p = 0; p < s.size(); p++){
        a += (s[p] == 'n');
        z += (s[p] == 'z');
    }

    for(long p = 0; p < a; p++){std::cout << "1 ";}
    for(long p = 0; p < z; p++){std::cout << "0 ";}
    std::cout << std::endl;

    return 0;
}
