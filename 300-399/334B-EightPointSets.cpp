#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    const int N = 8;

    std::set<std::pair<long,long>> inputSet;
    std::set<long> allX, allY;

    for(int k = 0; k < N; k++){
        long x(0), y(0); scanf("%ld %ld", &x ,&y);
        inputSet.insert(std::pair<long,long>(x,y));

        allX.insert(x); 
        allY.insert(y);
    }


    std::string output("respectable");
    if(allX.size() != 3 || allY.size() != 3){output = "ugly";}
    else{
        std::vector<long> vectorX;
        std::vector<long> vectorY;

        std::set<long>::iterator myIter;
        for(myIter = allX.begin(); myIter != allX.end(); myIter++){vectorX.push_back(*myIter);}
        for(myIter = allY.begin(); myIter != allY.end(); myIter++){vectorY.push_back(*myIter);}

        std::sort(vectorX.begin(), vectorX.end()); 
        std::sort(vectorY.begin(), vectorY.end());

        for(int a = 0; a < 3; a++){
            for(int b = 0; b < 3; b++){
                if(a == 1 && b == 1){continue;}
                if(inputSet.find(std::pair<long,long>(vectorX[a], vectorY[b])) == inputSet.end()){output = "ugly";}
            }
        }
    
    }

    std::cout << output << std::endl;

    return 0;
}
