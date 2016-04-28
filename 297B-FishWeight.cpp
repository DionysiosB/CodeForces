#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    std::map<long, long> diffMap;
    while(n--){
        long t; scanf("%ld", &t); 
        if(diffMap.count(t) > 0){++diffMap[t];} else{diffMap.insert(std::pair<long, long>(t, 1));}
    }
    while(m--){
        long t; scanf("%ld", &t); 
        if(diffMap.count(t) > 0){--diffMap[t];} else{diffMap.insert(std::pair<long, long>(t, -1));}
    }

    std::vector<std::pair<long, long> > diffVec;
    for(std::map<long, long>::iterator mapIter = diffMap.begin(); mapIter != diffMap.end(); mapIter++){diffVec.push_back(std::pair<long, long>(mapIter->first, mapIter->second));}
    sort(diffVec.begin(), diffVec.end());

    long total(0);
    for(long p = diffVec.size() - 1; p >= 0; p--){
        total += diffVec[p].second;
        if(total > 0){break;}
    }
    puts(total > 0 ? "YES" : "NO");

    return 0;
}
