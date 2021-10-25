#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;
    for(long p = 1; p < s.size(); p++){
        if(s[p - 1] == '1' && s[p] == '0'){s[p - 1] = '0'; s[p] = '1';}
        if(s[p - 1] == '2' && s[p] == '1'){s[p - 1] = '1'; s[p] = '2';}
    }
    std::cout << s << std::endl;

    for(long p = s.size() - 1; p > 0; p--){
        if(s[p - 1] == '1' && s[p] == '0'){s[p - 1] = '0'; s[p] = '1';}
        if(s[p - 1] == '2' && s[p] == '1'){s[p - 1] = '1'; s[p] = '2';}
    }

    std::cout << s << std::endl;

    return 0;
}
