#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long q; std::cin >> q;
    while(q--){
        std::string s; std::cin >> s;
        long u(0), d(0), l(0), r(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'U'){++u;}
            else if(s[p] == 'D'){++d;}
            else if(s[p] == 'L'){++l;}
            else if(s[p] == 'R'){++r;}
        }

        u = (u < d) ? u : d; d = u;
        r = (l < r) ? l : r; l = r;
        if(u <= 0 && l > 0){l = r = 1;}
        if(r <= 0 && u > 0){u = d = 1;}

        std::cout << (u + d + l + r) << std::endl;
        for(long p = 0; p < u; p++){std::cout << "U";}
        for(long p = 0; p < l; p++){std::cout << "L";}
        for(long p = 0; p < d; p++){std::cout << "D";}
        for(long p = 0; p < r; p++){std::cout << "R";}
        std::cout << std::endl;
    }

    return 0;
}
