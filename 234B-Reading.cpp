#include <cstdio>
#include <map>
#include <algorithm>

int main(){

    FILE *inputFile; FILE *outputFile;
    inputFile  = fopen("input.txt", "r"); 
    outputFile = fopen("output.txt", "w"); 

    int n(0), k(0); fscanf(inputFile, "%d %d", &n, &k);

    std::map<int,int> readingLight;
    std::map<int,int>::iterator mapIter;
    int currentMinIndex(0), currentMin(0);

    for(int p = 1; p <= n; p++){
        int temp(0); fscanf(inputFile, "%d", &temp);

        if(readingLight.size() < k){readingLight.insert(std::pair<int,int>(p,temp));}
        else if(temp > currentMin){readingLight.erase(currentMinIndex); readingLight.insert(std::pair<int,int>(p,temp));}

        currentMinIndex = 0; currentMin = 1000;
        for(mapIter = readingLight.begin(); mapIter != readingLight.end(); mapIter++){
            if(mapIter->second < currentMin){currentMinIndex = mapIter->first; currentMin = mapIter->second;}
        }
        
    }

    fprintf(outputFile, "%d\n", currentMin);
    for(mapIter = readingLight.begin(); mapIter != readingLight.end(); mapIter++){fprintf(outputFile, "%d ", mapIter->first);}
    fprintf(outputFile,"\n");

    return 0;
}
