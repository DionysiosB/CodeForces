#include <iostream>

bool isVowel(char c){return (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'Y');}


int main(){

    std::string s; std::cin >> s;
    int prev(-1), diff(0), maxDiff(0);
    for(int p = 0; p < s.size(); p++){
        if(isVowel(s[p])){
            diff = p - prev;
            maxDiff = (maxDiff > diff) ? maxDiff : diff;
            prev = p;
        }
    }

    diff = s.size() - prev;
    maxDiff = (maxDiff > diff) ? maxDiff : diff;

    std::cout << maxDiff << std::endl;

    return 0;
}
