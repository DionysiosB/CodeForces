#include <cstdio>
#include <iostream>
#include <vector>
#include <set>


int main(){

    const int D = 1000;

    std::string homeName; std::cin >> homeName;
    std::string awayName; std::cin >> awayName;

    std::set<int> playerSet;
    std::set<int> penaltySet;
    std::vector<std::pair<int, int> > penaltyVec;

    int n; std::cin >> n;
    while(n--){

        int time; char team; int number; char card;
        std::cin >> time >> team >> number >> card;

        if(team == 'a'){number += D;}

        if(penaltySet.find(number) != penaltySet.end()){continue;}
        else if(card == 'y' && playerSet.find(number) == playerSet.end()){playerSet.insert(number);}
        else if(card == 'r' || playerSet.find(number) != playerSet.end()){
            penaltyVec.push_back(std::pair<int, int>(number, time));
            penaltySet.insert(number);
        }

    }

    for(int p = 0; p < penaltyVec.size(); p++){
        std::string teamName = (penaltyVec[p].first < D) ? homeName : awayName;
        int number = (penaltyVec[p].first < D) ? penaltyVec[p].first : (penaltyVec[p].first - D);
        int time = penaltyVec[p].second;
        std::cout << teamName << " " << number << " " << time << std::endl;
    }


    return 0;
}
