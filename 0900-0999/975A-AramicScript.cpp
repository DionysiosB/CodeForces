#include <iostream>
#include <set>

int main(){

    long n; std::cin >> n;
    std::set<std::set<char> > s;

    while(n--){
        std::string t; std::cin >> t;
        std::set<char> sc;
        for(long p = 0; p < t.size(); p++){sc.insert(t[p]);}
        s.insert(sc);
    }

    std::cout << s.size() << std::endl;

    return 0;
}
