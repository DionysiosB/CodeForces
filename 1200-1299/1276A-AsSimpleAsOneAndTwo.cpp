#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> r;
        char bb(s[0]), b(s[1]);
        for(long p = 2; p < s.size(); p++){
            if(bb == 'o' && b == 'n' && s[p] == 'e'){r.push_back(p - 1); b = s[p];}
            else if(bb == 't' && b == 'w' && s[p] == 'o'){
                if(p + 1 < s.size() && s[p + 1] == 'n'){r.push_back(p);}
                else{r.push_back(p - 1); b = s[p];}
            }
            else{bb = b; b = s[p];}
        }

        std::cout << r.size() << std::endl;
        for(long p = 0; p < r.size(); p++){std::cout << (1 + r[p]) << " ";}
        std::cout << std::endl;
    }

    return 0;
}
