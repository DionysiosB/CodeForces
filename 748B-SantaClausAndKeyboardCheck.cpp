#include <iostream>
#include <map>
#include <set>

int main(){

    std::string s, t; std::cin >> s >> t;
    bool possible = (s.size() == t.size());
    std::map<char, char> swap;
    std::set<char> unchanged;
    for(size_t p = 0; p < s.size(); p++){
        if(!possible){break;}
        if(s[p] == t[p]){
            if(swap.count(s[p]) > 0){possible = 0; break;}
            else{unchanged.insert(s[p]);}
        }
        else if(swap.count(s[p]) > 0 || swap.count(t[p]) > 0){
            if(swap[s[p]] != t[p] || swap[t[p]] != s[p]){possible = 0; break;}
        }
        else if(unchanged.count(s[p]) > 0 || unchanged.count(t[p]) > 0){possible = 0; break;}
        else{swap[s[p]] = t[p]; swap[t[p]] = s[p];}
    }

    if(possible){
        std::cout << (swap.size() / 2) << std::endl;
        std::set<char> used;
        for(std::map<char, char>::iterator mapIter = swap.begin(); mapIter != swap.end(); mapIter++){
            char u = mapIter->first;
            char v = mapIter->second;
            if(used.count(u) > 0 || used.count(v) > 0){continue;}
            used.insert(u); used.insert(v);
            std::cout << u << " " << v << std::endl;
        }
    }
    else{std::cout << "-1" << std::endl;}

    return 0;
}
