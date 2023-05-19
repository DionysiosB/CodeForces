#include <iostream>

int main(){

    long r; std::cin >> r;
    std::string s; std::cin >> s;
    bool allnines(true);
    for(long p = 0; allnines && p < s.size(); p++){if(s[p] != '9'){allnines = false;}}

    if(allnines || (s.size() % r)){
        long n = 1 + s.size() / r;
        std::string t(r, '0'); t[0] = '1';
        for(long p = 0; p < n; p++){std::cout << t;}
        std::cout << std::endl;
    }
    else{
        std::string t = s.substr(0, r);
        bool smaller(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == t[p % r]){continue;}
            if(s[p] < t[p % r]){smaller = true;}
            break;
        }

        if(!smaller){
            for(long p = t.size() - 1; p >= 0; p--){
                if(t[p] == '9'){t[p] = '0';}
                else{++t[p]; break;}
            }
        }

        for(long p = 0; p < s.size() / r; p++){std::cout << t;}
        std::cout << std::endl;
    }

    return 0;
}
