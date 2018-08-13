#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::string s, t; std::cin >> s >> t;

    std::vector<long> pos;
    for(long p = 0; p < t.size(); p++){pos.push_back(p);}

    for(long shift = 0; shift <= t.size() - s.size(); shift++){
        std::vector<long> changes;
        for(long p = 0; p < s.size(); p++){if(s[p] != t[shift + p]){changes.push_back(p);}}
        if(changes.size() < pos.size()){pos = changes;}
    }

    std::cout << pos.size() << std::endl;
    for(long p = 0; p < pos.size(); p++){std::cout << (pos[p] + 1) << " ";}
    std::cout << std::endl;

    return 0;
}
