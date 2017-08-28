#include <cstdio>
#include <iostream>
#include <vector>


int main(){

    std::string temp; 
    std::vector<std::string> lineVec; 
    int maxSize(0);

    while(getline(std::cin, temp)){
        lineVec.push_back(temp);
        if(temp.size() > maxSize){maxSize = temp.size();}
    }


    bool addLeft(0);
    for(int p = 0; p < maxSize + 2; p++){printf("*");}; puts("");

    for(int p = 0; p < lineVec.size(); p++){
        std::string current = lineVec[p];
        int totalSpace = (maxSize - current.size());
        int leftSpace  = totalSpace / 2;
        int rightSpace = totalSpace / 2;
        if(totalSpace % 2){
            if(addLeft){++leftSpace;} else{++rightSpace;}
            addLeft = 1 - addLeft;
        }

        printf("*");
        for(int q = 0; q < leftSpace; q++){printf(" ");}
        std::cout << current;
        for(int q = 0; q < rightSpace; q++){printf(" ");}
        printf("*\n");

    }

    for(int p = 0; p < maxSize + 2; p++){printf("*");}; puts("");



    return 0;
}
