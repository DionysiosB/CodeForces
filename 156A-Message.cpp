#include <iostream>
#include <string>

int main(){

    std::string s; getline(std::cin, s);
    std::string t; getline(std::cin, t);
    int n = s.size(); int minDiff = s.size() + t.size();

    for(int startPos = -t.size(); startPos <= n; startPos++){
        int diff(0);
        for(int p = 0; p < t.size(); p++){
            if((p + startPos < 0) || (p + startPos) >= s.size()){++diff;}
            else{diff += (s[startPos + p] != t[p]);}
        }
        if(diff < minDiff){minDiff = diff;}
    }

    std::cout << minDiff << std::endl;

    return 0;
}
