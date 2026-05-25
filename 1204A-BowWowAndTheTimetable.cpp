#include <iostream>

int main(){

    std::string s; std::cin >> s;
    bool z(s == "0" || s[0] == '1'); for(long p = 1; p < s.size(); p++){if(s[p] != '0'){z = 0; break;}}
    bool fw(z && s.size() % 2);
    long cnt = (s.size() + 1 - z) / 2;
    printf("%ld\n", cnt);

    return 0;
}
