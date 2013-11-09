#include <cstdio>
#include <vector>
#include <algorithm>

bool pairSort(const std::pair<int,int>& a, const std::pair<int,int>& b ) {
    if( a.first < b.first ) return true;
    else if(a.first ==  b.first && a.second < b.second ) return true;
    else return false;
}

int main(){
    int warriorStrength = 0, numDragons = 0;
    scanf("%d %d", &warriorStrength, &numDragons); 
    std::vector<std::pair<int, int>> dragons;

    int strength = 0, bonus = 0;
    for(int k = 0; k < numDragons; k++){
        scanf("%d %d", &strength, &bonus);
        dragons.push_back(std::pair<int, int>(strength, bonus));
    }
    sort(dragons.begin(), dragons.end(), pairSort);

    bool possible = 1;
    for(int k = 0; k < numDragons; k++){
        if(warriorStrength > dragons[k].first){warriorStrength += dragons[k].second;}
        else{possible = 0; break;}
    }
    possible ? printf("YES\n") : printf("NO\n");
    return 0;
}
