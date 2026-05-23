#include <iostream>
#include <vector>
#include <map>

int main(){

    const int N = 26;
    long n; std::string s1, s2;
    std::cin >> n >> s1 >> s2;

    long distance(0);
    std::map<std::pair<char, char>, long> diffs;
    
    for(long p = 0; p < n; p++){
        if(s1[p] == s2[p]){continue;}
        ++distance;
        std::pair<char, char> chars(std::pair<char, char>(s1[p], s2[p]));
        diffs[chars] = p;
    }

    std::pair<long, long> positionPair;

    bool reduceByTwo(false);
    for(std::map<std::pair<char, char>, long>::iterator mapIter = diffs.begin(); mapIter != diffs.end(); mapIter++){

        std::pair<char, char> current = mapIter->first;
        std::pair<char, char> target = std::pair<char, char>(current.second, current.first);
        if(diffs.count(target) > 0){
            reduceByTwo = true; 
            positionPair.first = mapIter->second; 
            positionPair.second = diffs[target]; 
            break;
        }
    }

    if(reduceByTwo){
        std::cout << (distance - 2) << std::endl << (1 + positionPair.first) << " " << (1 + positionPair.second) << std::endl; 
        return 0;
    }


    bool reduceByOne(false);
    for(std::map<std::pair<char, char>, long>::iterator mapIter = diffs.begin(); mapIter != diffs.end(); mapIter++){

        std::pair<char, char> current = mapIter->first;
        std::pair<char, char> target;
        for(int p = 0; p < N; p++){
            target = std::pair<char, char>(('a' + p), current.first);
            if(diffs.count(target) > 0){
                reduceByOne = true; 
                positionPair.first = mapIter->second; 
                positionPair.second = diffs[target]; 
                break;
            }
        }
        if(reduceByOne){break;}
    }

    if(reduceByOne){
        std::cout << (distance - 1) << std::endl << (1 + positionPair.first) << " " << (1 + positionPair.second) << std::endl; 
        return 0;
    }

    std::cout << distance << std::endl << (-1) << " " << (-1) << std::endl; 

    return 0;
}
