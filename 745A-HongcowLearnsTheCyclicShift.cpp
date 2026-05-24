#include <iostream>
#include <set>

int main(){

    std::string s; std::cin >> s;
    std::set<std::string> cs;
    cs.insert(s);

    for(int p = 0; p < s.size(); p++){
        s = s[s.size() - 1] + s.substr(0, s.size() - 1);
        cs.insert(s);
    }

    std::cout << cs.size() << std::endl;

    return 0;
}
