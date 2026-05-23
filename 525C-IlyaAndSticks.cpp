#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

int main(){

    long long n; scanf("%lld\n", &n);
    std::map<long long, long long> counts;
    std::set<long long> lengthSet;
    for(long long p = 0; p < n; p++){
        long long l; scanf("%lld", &l);
        if(counts.count(l) <= 0){counts.insert(std::pair<long long, long long>(l, 0));}
        ++counts[l];
        lengthSet.insert(l);
    }

    std::vector<long long> lengthVec;
    for(std::set<long long>::iterator iter = lengthSet.begin(); iter != lengthSet.end(); iter++){lengthVec.push_back(*iter);}
    sort(lengthVec.begin(), lengthVec.end());

    std::vector<long long> sides;
    for(long long p = lengthVec.size() - 1; p >= 0; p--){
        long long length = lengthVec[p];
        if(counts[length] % 2){
            --counts[length];
            if(counts.count(length - 1) > 0){++counts[length - 1];}
        }

        if(counts[length] <= 0){counts.erase(length);}
        else{for(long long q = 0; q < counts[length] / 2; q++){sides.push_back(length);}}
    }

    long long total(0);
    for(long long p = 0; p + 1 < sides.size(); p += 2){total += sides[p] * sides[p + 1];}
    printf("%lld\n", total);

    return 0;
}
