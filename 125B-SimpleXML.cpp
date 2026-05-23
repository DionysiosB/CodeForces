#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    long cnt(0);
    for(long p = 1; p < s.size(); p++){
        if(s[p] == '<' || s[p] == '>' || s[p] == '/'){continue;}
        if(s[p - 1] == '<'){
            std::string spaces(2 * cnt, ' ');
            std::string cur = spaces + s.substr(p - 1, 3);
            std::cout << cur << std::endl;
            ++cnt;
        }
        else if(s[p - 1] == '/'){
            --cnt;
            std::string spaces(2 * cnt, ' ');
            std::string cur = spaces + s.substr(p - 2, 4);
            std::cout << cur << std::endl;
        }
    }

    std::cout << std::endl;

    return 0;
}
