#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::string t(""); t += s[0];
        for(long p = 2; p + 1 < s.size(); p += 2){t += s[p];}
        t += s.back();
        std::cout << t << std::endl;
    }

    return 0;
}
