#include <iostream>
#include <string>

int main(){

    std::string s; getline(std::cin, s);
    std::string ans("");
    for(int p = 1; p < s.size(); p++){
        if((s[p - 1] != s[s.size() - 1]) || (s[0] != s[s.size() - p])){continue;}

        std::string prefix = s.substr(0, p);
        std::string suffix = s.substr(s.size() - p, p);
        if(prefix != suffix){continue;}

        int midPos = s.find(prefix, 1);
        if(midPos == std::string::npos || midPos >= (s.size() - p)){continue;}

        ans = prefix;
    }

    std::cout << ((ans.size() > 0) ? ans : "Just a legend") << std::endl;

    return 0;
}
