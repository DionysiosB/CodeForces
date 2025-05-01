#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long a(0), z(0);
        for(long p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        if(a != z){std::cout << (a < z ? a : z) << std::endl;}
        else{std::cout << (a - 1) << std::endl;}
    }

}
