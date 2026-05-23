#include <cstdio>
#include <vector>

int main(){

    int x(0), k(0); scanf("%d %d", &x, &k);
    std::vector<bool> rounds(x + 1, 0);
    while(k--){

        int roundType; scanf("%d\nn", &roundType);

        if(roundType == 1){
            int idA, idB; scanf("%d %d", &idA, &idB);
            rounds[idA] = rounds[idB] = 1;
        }
        else if(roundType == 2){
            int idA; scanf("%d", &idA);
            rounds[idA] = 1;
        }
    }

    int maxRounds(0);
    for(int k = 1; k < x; k++){if(!rounds[k]){++maxRounds;}}

    int currentIndex(1), minRounds(0); 
    while(currentIndex < x){
        if(rounds[currentIndex] == 1){++currentIndex; continue;}
        ++minRounds; ++currentIndex;if(rounds[currentIndex] == 0){++currentIndex;}
    }

    printf("%d %d\n", minRounds, maxRounds);

    return 0;
}
