#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long px(0), py(0); std::cin >> px >> py;
        std::string s; std::cin >> s;
        long l(0), r(0), u(0), d(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'R'){++r;}
            else if(s[p] == 'L'){++l;}
            else if(s[p] == 'U'){++u;}
            else if(s[p] == 'D'){++d;}
        }
        
        bool possible(true);
        if(px > 0 && r < px){possible = false;}
        if(px < 0 && l < -px){possible = false;}
        if(py > 0 && u < py){possible = false;}
        if(py < 0 && d < -py){possible = false;}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
