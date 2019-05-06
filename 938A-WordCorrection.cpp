#include <iostream>

bool isVowel(char x){return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y');}

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::cout << s[0];
    for(long p = 1; p < s.size(); p++){
        if(isVowel(s[p]) && isVowel(s[p - 1])){continue;}
        std::cout << s[p];
    }
    std::cout << std::endl;

    return 0;
}
