#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    long rr(0), cc(0);
    for(long p = 1; p <= 5; p++){
        long col = (s.size() + p - 1) / p;
        if(col > 20){continue;}
        rr = p; cc = col; break;
    }

    long mm = (rr - s.size() % rr) % rr;
    long idx(0);
    std::cout << rr << " " << cc << std::endl;
    for(long row = 0; row < rr ; row++){
        for(long col = 0; col < cc; col++){
            if(col == 0 && mm > 0){std::cout << "*"; --mm;}
            else{std::cout << s[idx++];}
        }
        std::cout << std::endl;
    }

    return 0;
}
