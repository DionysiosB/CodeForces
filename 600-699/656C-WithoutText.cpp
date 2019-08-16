#include <iostream>

int main(){

    std::string s; std::cin >> s;
    int sum(0);
    for(size_t p = 0; p < s.size(); p++){
        if('A' <= s[p] && s[p] <= 'Z'){sum += (s[p] - 'A' + 1);}
        if('a' <= s[p] && s[p] <= 'z'){sum -= (s[p] - 'a' + 1);}
    }

    std::cout << sum << std::endl;

    return 0;
}
