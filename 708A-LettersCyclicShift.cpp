#include <iostream>

int main(){

    std::string s; std::cin >> s;
    bool inside(0), done(0);
    size_t ind(0);
    while((ind < s.size()) && (s[ind] == 'a')){++ind;}
    if(ind == s.size()){s[s.size() - 1] = 'z'; std::cout << s << std::endl; return 0;}
    while((ind < s.size()) && (s[ind] != 'a')){--s[ind]; ++ind;}
    std::cout << s << std::endl;

    return 0;
}
