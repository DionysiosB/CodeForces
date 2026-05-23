#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool pairComp(std::pair<std::string, int> A, std::pair<std::string, int> B){return A.second > B.second;}

int main(){

    int n; std::cin >> n;

    std::map<std::string, int> bestScores;
    for(int k = 0; k < n; k++){
        std::string name; int score;
        std::cin >> name >> score;
        //std::cout << name << "\t" << score << std::endl;
        if(bestScores.find(name) == bestScores.end()){bestScores.insert(std::pair<std::string, int>(name, score));}
        else if(bestScores[name] < score){bestScores[name] = score;}
    }

    int N = bestScores.size();
    std::vector<std::pair<std::string, int> > scoreVec(N);
    std::map<std::string, int>::iterator mapIter = bestScores.begin();

    int index(0);
    for(mapIter = bestScores.begin(); mapIter != bestScores.end(); mapIter++){
        scoreVec[index++] = *mapIter;
    }

    sort(scoreVec.begin(), scoreVec.end(), pairComp);

    printf("%d\n", N);

    int lastScore = scoreVec[N - 1].second;
    std::string title = "pro";

    for(int p = 0; p < N; p++){
        std::cout << scoreVec[p].first << " ";
        if(scoreVec[p].second != lastScore){
            if(p > 0.5 * N){title = "noob";}
            else if(p > 0.2 * N){title = "random";}
            else if(p > 0.1 * N){title = "average";}
            else if(p > 0.01 * N){title = "hardcore";}
            lastScore = scoreVec[p].second;
        }

        //std::cout << title << "\t" << scoreVec[p].second << std::endl;
        std::cout << title << std::endl;
    }

    return 0;
}
