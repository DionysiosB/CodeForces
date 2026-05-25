#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >>s;
        long z(0), a(0);
        for(long p = 0; p < s.size(); p++){z += (s[p] == '0'); a += (s[p] == '1');}
        long x = (z < a) ? z : a;
        x %= 2;
        std::cout << (x ? "DA" : "NET") << std::endl;
    }

    return 0;
}
