#include <iostream>

int main(){

    std::string s; std::cin >> s;

    bool possible(true);
    char next('a');
    for(size_t p = 0; p < s.size(); p++){
        if(s[p] < next){continue;}
        if(s[p] == next){++next;}
        else{possible = false; break;}
    }

    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
