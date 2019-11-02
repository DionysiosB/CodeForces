#include <iostream>

int main(){

    int n; std::cin >> n;
    std::string s; std::cin >> s;

    bool par(0), word(0); 
    int count(0), len(0), maxLen(0);
    for(int p = 0; p < s.size(); p++){
        if(s[p] == '('){
            if(word == 1 && par == 0 && maxLen < len){maxLen = len;}
            par = 1; word = 0; len = 0;
        }
        else if(s[p] == ')'){par = 0; word = 0; len = 0;}
        else if(('a' <= s[p] && s[p] <= 'z') || ('A' <= s[p] && s[p] <= 'Z') ){
            if(word == 0){count += par; len = 0;}
            word = 1;
            ++len;
        }
        else if(s[p] == '_'){
            if(word == 1 && par == 0 && maxLen < len){maxLen = len;}
            word = 0;
        }
    }
    
    if(word == 1 && par == 0 && maxLen < len){maxLen = len;}

    std::cout << maxLen << " " << count << std::endl;

    return 0;
}
