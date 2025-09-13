#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long z(0), cnt(0);
        for(char x : s){z += (x == '0');}
        for(int p = 0; p < z; p++){cnt += (s[p] == '1');}
        std::cout << cnt << std::endl;
    }

}
