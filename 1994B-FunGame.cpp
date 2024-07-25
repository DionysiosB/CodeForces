#include <iostream>

int main(){

    long q; std::cin >> q;
    while(q--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        bool possible(true);
        for(long p = 0; possible && p < s.size(); p++){
            if(s[p] == '1'){break;}
            else if(t[p] == '1'){possible = false;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
