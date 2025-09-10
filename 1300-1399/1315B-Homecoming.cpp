#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){

        long a, b, g; std::cin >> a >> b >> g;
        std::string s; std::cin >> s;
        s.back() = '_';
        
        long start(1);
        for(long p = s.size() - 2; p >= 0; p--){
            if(s[p] == s[p + 1]){continue;}
            g -= (s[p] == 'A' ? a : b);
            if(g < 0){start = p + 2; break;}
        }

        std::cout << start << std::endl;
    }

}
