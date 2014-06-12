#include <cstdio>
#include <vector>
#include <algorithm>

bool checkSubset(std::vector<int> a, std::vector<int> b){

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    std::vector<int> cut(a.size() + b.size());
    std::vector<int>::iterator cutEnd;

    cutEnd = std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), cut.begin());
    cut.resize(cutEnd - cut.begin());

    if(cut.size() == b.size()){return 1;}
    else{return 0;}

}


int main(){

    int n(0); scanf("%d", &n);

    std::vector<std::vector<int>> numbers;
    int newNumber(0);

    for(int k = 0; k < n; k++){
        int currentLength(0); scanf("%d", &currentLength);
        std::vector<int> temp;
        while(currentLength--){scanf("%d", &newNumber); temp.push_back(newNumber);}
        numbers.push_back(temp);
    }

    for(int first = 0; first < n; first++){
        bool subsetFlag = 0;
        for(int second = 0; second < n; second++){
            if(first == second){continue;}
            if(checkSubset(numbers[first], numbers[second])){subsetFlag = 1; break;}
        }
        if(subsetFlag){puts("NO");} else{puts("YES");}
    }

    return 0;
}
