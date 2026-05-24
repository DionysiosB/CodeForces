#include <iostream>

int main(){

    std::string s; std::cin >> s;
    long count(0);
    bool changed(false);
    for(long p = 1; p < s.size(); p++){
        if(s[p - 1] == 'V' && s[p] == 'K'){++count; s[p - 1] = s[p] = 'x';}
    }

    for(long p = 1; p < s.size(); p++){
        if((s[p - 1] == 'V' && s[p] == 'V') || (s[p - 1] == 'K' && s[p] == 'K')){++count; break;}
    }

    std::cout << count << std::endl;

    return 0;
}
