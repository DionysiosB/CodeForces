#include <cstdio>
#include <vector>
#include <map>


int main(){
    
    long n(0); scanf("%ld", &n);
    std::map<long, std::vector<long> > data;

    for(int k = 0; k < n; k++){
        long temp(0); scanf("%ld", &temp);
        if(data.find(temp) != data.end()){data[temp].push_back(k);}
        else{data.insert(std::pair<long, std::vector<long> >(temp, std::vector<long>(1,k)));}
    }

    std::vector<std::pair<long, long> > solutions;
    
    std::map<long, std::vector<long> >::iterator myIter;
    for(myIter = data.begin(); myIter != data.end(); myIter++){
        long currentNum = myIter -> first;
        std::vector<long> currentVec = myIter -> second;

        if(currentVec.size() == 1){solutions.push_back(std::pair<long, long>(currentNum, 0));}
        else{
            long testPeriod = currentVec[1] - currentVec[0];
            bool found(1);
            for(int k = 1; k < currentVec.size(); k++){if(currentVec[k] - currentVec[k - 1] != testPeriod){found = 0; break;}}
            if(found){solutions.push_back(std::pair<long, long>(currentNum, testPeriod));}
        }

    }

    printf("%lu\n", solutions.size());
    for(int k = 0; k < solutions.size(); k++){printf("%ld %ld\n", solutions[k].first, solutions[k].second);}

    return 0;
}

