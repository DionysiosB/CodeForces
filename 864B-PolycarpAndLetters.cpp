#include <iostream>
#include <set>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long m(0);
    std::set<char> t;
    for(long p = 0; p < s.size(); p++){
        if('a' <= s[p] && s[p] <= 'z'){t.insert(s[p]);}
        else{m = (m > t.size()) ? m : t.size(); t.clear();}
    }
    
    m = (m > t.size()) ? m : t.size(); t.clear();
    std::cout << m << std::endl;

    return 0;
}
