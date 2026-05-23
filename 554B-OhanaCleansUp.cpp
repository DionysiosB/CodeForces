#include <cstdio>
#include <iostream>
#include <map>

int main(){

    int n; scanf("%d\n", &n);
    std::map<std::string, int> rows;
    for(int p = 0; p < n; p++){
        std::string s; getline(std::cin, s);
        if(rows.count(s) > 0){++rows[s];}
        else{rows.insert(std::pair<std::string, int>(s, 1));}
    }


    int maxCount(0);
    for(std::map<std::string, int>::iterator mapIter = rows.begin(); mapIter != rows.end(); mapIter++){
        int current = mapIter->second;
        if(current > maxCount){maxCount = current;}
    }

    std::cout << maxCount << std::endl;

    return 0;
}
