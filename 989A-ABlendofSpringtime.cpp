#include <iostream>

int main(){

    std::string s; std::cin >> s;
    bool possible(false);
    for(long p = 1; p + 1 < s.size(); p++){
        if(s[p] == '.' || s[p - 1] == '.' || s[p + 1] == '.'){continue;}
        if(s[p] != s[p - 1] && s[p] != s[p + 1] && s[p - 1] != s[p + 1]){possible = true; break;}
    }

    std::cout << (possible ? "Yes" : "No") << std::endl;

    return 0;
}
