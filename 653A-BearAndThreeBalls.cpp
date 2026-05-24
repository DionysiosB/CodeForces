#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    std::set<int> sizeSet;
    std::vector<int> sizeVec;
    for(int p = 0; p < n; p++){
        int x; std::cin >> x;
        if(sizeSet.count(x) > 0){continue;}
        sizeSet.insert(x);
        sizeVec.push_back(x);
    }


    sort(sizeVec.begin(), sizeVec.end());
    bool possible(0);
    for(int p = 2; p < sizeVec.size(); p++){
        if(sizeVec[p - 1] == sizeVec[p] - 1 && sizeVec[p - 2] == sizeVec[p] - 2){
            possible = 1; 
            break;
        }
    }
    puts(possible ? "YES" : "NO");

    return 0;
}
