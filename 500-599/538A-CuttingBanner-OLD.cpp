#include <iostream>
#include <vector>
#include <map>


int main(){

    const std::string target = "CODEFORCES";

    std::string source; getline(std::cin, source);

    std::map<char, std::vector<int> > pos;
    for(int p = 0; p < source.size(); p++){
        char current = source[p];
        if(pos.count(current)){pos[current].push_back(p);}
        else{
            std::vector<int> where; where.push_back(p);
            pos.insert(std::pair<char, std::vector<int> >(current, where));
        }
    }

    for(std::map<char, std::vector<int> >::iterator mapIter = pos.begin(); mapIter != pos.end(); mapIter++){

        char letter = mapIter->first;
        std::vector<int> vec = mapIter->second;

        std::cout << letter << "\t";
        for(int t = 0; t < vec.size(); t++){std::cout << vec[t] << "\t";}
        std::cout << std::endl;


    }

    std::cout << "\n\n\n===\n\n";

    std::string ans = "YES";
    int currentPos = 0;
    for(int p = 0; p < target.size(); p++){
        char letter = target[p];
        std::vector<int> letterVec = pos[letter];
        bool found = 0;
        for(int q = 0; q < letterVec.size(); q++){
            if(currentPos > letterVec[q]){continue;}
            else{found = 1; currentPos = letterVec[q]; break;}
        }
        if(!found){ans = "NO"; break;}
        std::cout << letter << "\t" << currentPos << std::endl;
    }

    std::cout << ans << std::endl;


    return 0;
}
