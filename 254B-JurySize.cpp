#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    const int mdays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    FILE * inputFile = fopen("input.txt","r");
    int n; fscanf(inputFile, "%d\n", &n);

    std::map<int, long> countMap;

    while(n--){
        int m, d, p, t; fscanf(inputFile, "%d %d %d %d\n", &m, &d, &p, &t);
        int eventDay(0); 
        for(int u = 1; u < m; u++){eventDay += mdays[u];}
        eventDay += d;
        for(int lag = 1; lag <= t; lag++){
            int workDay = eventDay - lag;
            if(countMap.find(workDay) == countMap.end()){countMap.insert(std::pair<int, long>(workDay, p));}
            else{countMap[workDay] += p;}
        }
    }
    fclose(inputFile);

    long maxNeeded(0);
    std::map<int, long>::iterator mapIter;
    for(mapIter = countMap.begin(); mapIter != countMap.end(); mapIter++){
        if(mapIter -> second > maxNeeded){maxNeeded = mapIter -> second;}
    }


    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%ld\n", maxNeeded);
    fclose(outputFile);

    return 0;
}
