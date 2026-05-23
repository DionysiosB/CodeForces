#include <iostream>
#include <string>

bool isPalindrome(std::string s){
    for(int p = 0; p < s.size() / 2; p++){if(s[p] != s[s.size() - 1 - p]){return 0;}}
    return 1;
}



int main(){

    std::string s; getline(std::cin, s);
    std::string t;
    for(int p = 0; p <= s.size(); p++){
        t = s;
        t.insert(p, "a"); t[p] = t[s.size() - p];
        if(isPalindrome(t)){std::cout << t << std::endl; return 0;}
    }

    std::cout << "NA" << std::endl;

    return 0;
}
