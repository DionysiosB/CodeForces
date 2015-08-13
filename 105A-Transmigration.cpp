#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(){

    const int minLevel(100);
    const double eps = 0.001;

    int n, m; double k; std::cin >> n >> m >> k;

    std::map<std::string, int> skillMap;
    for(int p = 0; p < n; p++){
        std::string currentSkill; int currentLevel;
        std::cin >> currentSkill >> currentLevel;
        if(k * currentLevel >= minLevel){skillMap.insert(std::pair<std::string, long>(currentSkill, eps + k * currentLevel));}
    }
    for(int p = 0; p < m; p++){
        std::string currentSkill; std::cin >> currentSkill;
        if(skillMap.find(currentSkill) == skillMap.end()){skillMap.insert(std::pair<std::string, long>(currentSkill, 0));}
    }

    std::vector<std::string> skillVec;
    std::map<std::string, int>::iterator mapIter;
    for(mapIter = skillMap.begin(); mapIter != skillMap.end(); mapIter++){skillVec.push_back(mapIter -> first);}
    sort(skillVec.begin(), skillVec.end());

    std::cout << skillVec.size() << std::endl;
    for(int p = 0; p < skillVec.size(); p++){std::cout << skillVec[p] << " " << skillMap[skillVec[p]] << std::endl;}


    return 0;
}
