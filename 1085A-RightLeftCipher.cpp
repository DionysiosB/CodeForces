#include <iostream>

int main(){

    std::string s; std::cin >> s;
    std::string t(s); for(long p = 0; p < s.size(); p++){t[p] = '_';}
    long mid = (s.size() - 1) / 2;
    t[0] = s[mid];
    for(long p = 1; 2 * p <= s.size(); p++){
        if(mid + p < s.size()){t[2 * p - 1] = s[mid + p];}
        if(p <= mid){t[2 * p] = s[mid - p];}
    }

    std::cout << t << std::endl;

    return 0;
}
