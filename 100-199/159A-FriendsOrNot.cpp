#include <cstdio>
#include <iostream>
#include <string>
#include <set>
#include <vector>

int main(){

    int n(0), d(0); scanf("%d %d", &n, &d);

    std::string source(""), dest(""); int messageTime(0);
    std::vector<std::pair<std::string, std::string>> people;
    std::vector<int> times;
    std::set<std::pair<std::string, std::string>> friends;

    for(int k = 0; k < n; k++){
        std::cin >> source >> dest >> messageTime;
        std::pair<std::string, std::string> messagePeople(source,dest); 

        people.push_back(messagePeople);
        times.push_back(messageTime);
    }


    for(int before = 0; before < n; before++){

        std::string sourceBefore = people[before].first;
        std::string destBefore = people[before].second;
        int timeBefore = times[before];

        for(int after = before + 1; after < n; after++){
            std::string sourceAfter = people[after].first;
            std::string destAfter = people[after].second;
            int timeAfter = times[after];
            
            if(timeAfter > timeBefore && timeAfter - timeBefore <= d && sourceBefore == destAfter && destBefore == sourceAfter){
                if(friends.find(std::pair<std::string, std::string>(sourceBefore, destBefore)) == friends.end() && friends.find(std::pair<std::string, std::string>(destBefore, sourceBefore)) == friends.end()){
                    friends.insert(std::pair<std::string, std::string>(sourceBefore, destBefore));
                }
            }
        }
    }

    printf("%ld\n", friends.size());

    std::set<std::pair<std::string, std::string>>::iterator pairIter;
    for(pairIter = friends.begin(); pairIter != friends.end(); pairIter++){std::cout << pairIter->first << " " << pairIter->second << std::endl;}

    return 0;
}
