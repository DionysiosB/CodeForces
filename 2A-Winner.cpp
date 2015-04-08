#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>

int main(){
     
    long n(0); std::cin >> n;

    std::vector<std::string> winner(n + 1, "");
    std::vector<long> points(n + 1, 0);

    for(long k = 1; k <= n; k++){
        std::string name; long addPoints;
        std::cin >> name >> addPoints;
        winner[k] = name; points[k] = addPoints;
    }

    std::set<std::string> players;
    for(long k = 1; k <= n; k++){if(players.find(winner[k]) == players.end()){players.insert(winner[k]);}}

    std::map<std::string, std::vector<long> > state;
    std::set<std::string>::iterator nameIter;

    std::vector<long> zeroVec(n + 1, 0);
    for(nameIter = players.begin(); nameIter != players.end(); nameIter++){state.insert(std::pair<std::string, std::vector<long> > (*nameIter, zeroVec));}

    for(long k = 1; k <= n; k++){
        for(nameIter = players.begin(); nameIter != players.end(); nameIter++){state[*nameIter][k] = state[*nameIter][k - 1];}
        state[winner[k]][k] += points[k];
    }

    long maxScore = 0;
    for(nameIter = players.begin(); nameIter != players.end(); nameIter++){if(state[*nameIter][n] > maxScore){maxScore = state[*nameIter][n];}}

    std::string finalWinner("");
    for(long k = 1; k <= n; k++){
        if(finalWinner.size() > 0){break;}
        for(nameIter = players.begin(); nameIter != players.end(); nameIter++){
            if(state[*nameIter][k] >= maxScore && state[*nameIter][n] == maxScore){finalWinner = *nameIter; break;}
        }
    }

    std::cout << finalWinner << std::endl;

    return 0;
}
