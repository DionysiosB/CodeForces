#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    long w(k / 2), rem(0);
    std::string t("");
    for(long p = 0; p < s.size(); p++){
        if(w > 0 && s[p] == '('){t += '('; --w; ++rem;}
        else if(rem > 0 && s[p] == ')'){t += ')'; --rem;}
    }

    std::cout << t << std::endl;

    return 0;
}
