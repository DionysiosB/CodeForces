#include <iostream>

bool isPalindrome(std::string s){
    for(long p = 0; 2 * p <= s.size(); p++){if(s[p] != s[s.size() - 1 - p]){return false;}}
    return true;
}

bool allSame(std::string s){
    for(long p = 1; p < s.size(); p++){if(s[p] != s[0]){return false;}}
    return true;
}

int main(){

    std::string s; std::cin >> s;
    if(allSame(s)){std::cout << "0" << std::endl;}
    else if(isPalindrome(s)){std::cout << (s.size() - 1) << std::endl;}
    else{std::cout << s.size() << std::endl;}

    return 0;
}
