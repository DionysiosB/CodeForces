#include <iostream>

int main(){

    long q; std::cin >> q;
    while(q--){
        long n; std::cin >> n;
        int z(0), f(0);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            f |= (s.size() % 2);
            for(long u = 0; u < s.size(); u++){z += (s[u] == '0');}
            z %= 2;
        }

        std::cout << (n - 1 + (f || !z)) << std::endl;
    }

    return 0;
}
