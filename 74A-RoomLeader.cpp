#include <cstdio>
#include <iostream>
#include <map>

int main(){

    int n; scanf("%d\n", &n);
    std::map<std::string, int> scores;
    for(int k = 0; k < n; k++){
        char name[20]; scanf("%s", name);
        int temp(0), total(0);
        scanf("%d", &temp);total += 100 * temp;
        scanf("%d", &temp);total -= 50 * temp;
        for(int p = 0; p < 5; p++){scanf("%d", &temp);total += temp;}
        scanf("\n");
        scores.insert(std::pair<std::string,int>(std::string(name),total));
    }

    std::map<std::string, int>::iterator myIter = scores.begin();
    std::string roomLeader = myIter -> first;
    int maxScore = myIter -> second;

    for(myIter = scores.begin(); myIter != scores.end(); myIter++){
        if((myIter -> second) > maxScore){
            roomLeader = myIter -> first;
            maxScore = myIter -> second;
        }
    }

    std::cout << roomLeader << std::endl;
}
