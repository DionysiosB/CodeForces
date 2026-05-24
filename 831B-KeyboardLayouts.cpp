#include <iostream>
#include <map>

int main(){

    std::map<char, char> key;
    std::string s, t, text; std::cin >> s >> t >> text;
    for(int p = 0; p < 10; p++){key['0' + p] = '0' + p;}
    for(int p = 0; p < s.size(); p++){
        key[s[p]] = t[p];
        key[s[p] + 'A' - 'a'] = t[p] + 'A' - 'a';
    }


    for(long p = 0; p < text.size(); p++){std::cout << key[text[p]];}
    std::cout << std::endl;

    return 0;
}
