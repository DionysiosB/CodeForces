#include <iostream>
#include <string>

int main(){

    const std::string vw = "aeiou";
    std::string s, t; std::cin >> s >> t;
    if(s.size() != t.size()){std::cout << "No" << std::endl; return 0;}
    std::string ans = "Yes";
    for(long p = 0; p < s.size(); p++){
        bool fs = (vw.find(s[p]) == std::string::npos);
        bool ft = (vw.find(t[p]) == std::string::npos);
        if(fs ^ ft){ans = "No"; break;}
    }

    std::cout << ans << std::endl;

    return 0;
}
