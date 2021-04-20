#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool possible(s.size() % 3 == 0);
        long tc(0), mc(0);
        for(long p = 0; p < s.size() && possible; p++){
            if(s[p] == 'T'){++tc;}
            else if(s[p] == 'M'){++mc; if(tc < mc){possible = false; break;}}
        }

        if(tc != 2 * mc){possible = false;}
        tc = mc = 0;

        for(long p = s.size() - 1; p >= 0 && possible; p--){
            if(s[p] == 'T'){++tc;}
            else if(s[p] == 'M'){++mc; if(tc < mc){possible = false; break;}}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
