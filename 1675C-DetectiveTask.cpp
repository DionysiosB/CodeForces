#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long z(s.size() - 1), a(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0' && p < z){z = p;}
            else if(s[p] == '1'){a = p;}
        }

        std::cout << (z - a + 1) << std::endl;
    }

}
