#include <iostream>

int main(){

    std::string s; std::cin >> s;
    for(int p = 1; p < s.size(); p++){
        if(s[p] != s[p - 1]) continue;
        if(s[p - 1] != 'a' && (p == s.size() - 1 || s[p + 1] != 'a')){s[p] = 'a';}
        else if(s[p - 1] != 'b' && (p == s.size() - 1 || s[p + 1] != 'b')){s[p] = 'b';}
        else if(s[p - 1] != 'c' && (p == s.size() - 1 || s[p + 1] != 'c')){s[p] = 'c';}
    }

    std::cout << s << std::endl;

    return 0;
}
