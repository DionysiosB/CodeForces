#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long x(0), y(0); bool candy(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'L'){--x;}
            else if(s[p] == 'R'){++x;}
            else if(s[p] == 'U'){++y;}
            else if(s[p] == 'D'){--y;}
            if(x == 1 && y == 1){candy = true;}
        }

        std::cout << (candy ? "YES" : "NO") << std::endl;
    }

}
