#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 12;
    const int divisors[] = {1,2,3,4,6,12};
    const int L = 6;

    int t(0); scanf("%d\n", &t);
    while(t--){

        std::string cards(""); getline(std::cin, cards);
        std::vector<int> goodDivs;
        
        for(int k = 0; k < L; k++){

            int numCols = divisors[k];
            bool state[numCols]; 
            
            for(int u = 0; u < numCols; u++){state[u] = 1;}
            for(int m = 0; m < N; m++){if(cards[m] == 'O'){state[m % numCols] = 0;}}
            for(int u = 0; u < numCols; u++){if(state[u] == 1){goodDivs.push_back(numCols); break;}}
        }


        printf("%lu ", goodDivs.size());
        for(int k = goodDivs.size() - 1; k >= 0; k--){printf("%dx%d ", N / goodDivs[k], goodDivs[k]);}
        puts("");

    }

    return 0;
}
