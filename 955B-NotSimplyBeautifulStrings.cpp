#include <iostream>
#include <map>

int main(){

    std::string s; std::cin >> s;
    std::map<char, long> cm;
    for(long p = 0; p < s.size(); p++){++cm[s[p]];}

    bool one(false);
    for(std::map<char, long>::iterator it = cm.begin(); it != cm.end(); it++){
        if(it -> second == 1){one = true;}
    }

    if(s.size() < 4 || cm.size() > 4 || cm.size() == 1){std::cout << "No" << std::endl;}
    else if(cm.size() >= 3){std::cout << "Yes" << std::endl;}
    else if(one){std::cout << "No" << std::endl;}
    else{std::cout << "Yes" << std::endl;}

    return 0;
}
