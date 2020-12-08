#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    char cur('a');
    for(long p = 0; p < s.size(); p++){
        if(cur < s[p]){continue;}
        s[p] = cur++;
        if(cur > 'z'){break;}
    }

    std::cout << ((cur > 'z') ? s : "-1") << std::endl;

    return 0;
}
