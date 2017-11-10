#include <iostream>

int main(){

    std::string s; std::cin >> s;
    if(s.size() % 2){puts("-1"); return 0;}

    long u(0), d(0), l(0), r(0);
    for(size_t p = 0; p < s.size(); p++){
        if(s[p] == 'U'){++u;}
        else if(s[p] == 'D'){++d;}
        else if(s[p] == 'L'){++l;}
        else if(s[p] == 'R'){++r;}
    }

    long d1 = u - d; if(d1 < 0){d1 = - d1;}
    long d2 = l - r; if(d2 < 0){d2 = - d2;}
    long ans = (d1 + d2) / 2;
    std::cout << ans << std::endl;

    return 0;
}
