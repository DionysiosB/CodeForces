#include<iostream>

bool isVowel(char x){return ((x == 'a') || (x == 'o') || (x == 'u') || (x == 'i') || (x == 'e'));}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    long n = s.size();
    bool valid(isVowel(s[n - 1]) || s[n - 1] == 'n');
    for(long p = 0; p < n - 1; p++){if(!isVowel(s[p]) && (s[p] != 'n') && !isVowel(s[p + 1])){valid = false; break;}}
    std::cout << (valid ? "YES" : "NO") << std::endl;

    return 0;
}
