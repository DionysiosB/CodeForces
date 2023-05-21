#include <iostream>
#include <set>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::set<std::string> v;
        for(long p = 1; p < s.size(); p++){v.insert(s.substr(p - 1, 2));}
        std::cout << v.size() << std::endl;
    }

}
