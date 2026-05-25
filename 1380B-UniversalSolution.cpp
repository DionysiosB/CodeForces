#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long x(0), y(0), z(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'P'){++x;}
            else if(s[p] == 'R'){++y;}
            else if(s[p] == 'S'){++z;}
        }

        long u(0); char c;
        if(x >= y && x >= z){u = x; c = 'S';}
        else if(y >= x && y >= z){u = y; c = 'P';}
        else if(z >= x && z >= y){u = z; c = 'R';}

        std::string t(s.size(), c);
        std::cout << t << std::endl;
    }

    return 0;
}
