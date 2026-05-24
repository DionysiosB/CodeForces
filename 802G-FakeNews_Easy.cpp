#include <iostream>

int main(){

    const std::string t("heidi");
    std::string s; std::cin >> s;
    bool fake(false);
    long ind(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == t[ind]){++ind;}
        if(ind >= t.size()){fake = true; break;}
    }

    std::cout << (fake ? "YES" : "NO") << std::endl;

    return 0;
}
