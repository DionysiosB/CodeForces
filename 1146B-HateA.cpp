#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 0; p < s.size(); p++){cnt += (s[p] == 'a');}
    long other = (s.size() - cnt) / 2;
    std::string sa(""), sb("");
    for(long p = 0; p < s.size() && (cnt || other); p++){
        sa += s[p];
        if(s[p] == 'a'){--cnt;}
        else{--other; sb += s[p];}
    }

    if(sa + sb == s){std::cout << sa << std::endl;}
    else{std::cout << ":(" << std::endl;}

    return 0;
}
