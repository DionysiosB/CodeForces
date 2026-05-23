#include <cstdio>
#include <iostream>
#include <vector>

int main(){


    std::string first; getline(std::cin, first);
    std::string second; getline(std::cin, second);

    int index = 0;
    for(int p = 0; p < first.size(); p++){
        if(first[p] == second[index]){++index;}
    }

    if(index >= second.size()){puts("automaton");}
    else{

        const int N = 26;
        std::vector<int> countVec(N,0);

        for(int p = 0; p < first.size(); p++){++countVec[first[p] - 'a'];}
        for(int p = 0; p < second.size(); p++){--countVec[second[p] - 'a'];}
        bool array(1), tree(0);
        for(int p = 0; p < N; p++){
            if(countVec[p] != 0){array = 0;}; 
            if(countVec[p] <  0){tree = 1; break;}
        }

        if(array){puts("array");}
        else if(!tree){puts("both");}
        else{puts("need tree");}
    }

    return 0;
}
