#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long diff(0), imb(0);
    for(long p = 0; p < s.size(); p++){
        int sgn = (2 * p < n) ? -1 : 1;
        if(s[p] == '?'){imb += sgn;}
        else{diff += (s[p] - '0') * sgn;}
    }

    puts((diff + 9 * imb / 2 == 0) ? "Bicarp" : "Monocarp");

    return 0;
}
