#include <cstdio>
#include <vector>
#include <algorithm>

struct candy{long type, height, mass, used;};

bool compCandy(candy A, candy B){
    if(A.mass != B.mass){return A.mass > B.mass;}
    else{return A.height < B.height;}
}


long findMaxCandy(std::vector<candy> inputVec, long initialHeight, long initialType){

    bool nothingFound(0);
    long currentHeight = initialHeight;
    long targetType = initialType;
    long totalCandy(0);

    while(!nothingFound){
        nothingFound = 1;
        for(int p = 0; p < inputVec.size(); p++){
            if(!inputVec[p].used && inputVec[p].type == targetType && inputVec[p].height <= currentHeight){
                ++totalCandy;
                nothingFound = 0;
                targetType = 1 - targetType;
                currentHeight += inputVec[p].mass;
                inputVec[p].used = 1;
                break;
            }
        }
    }

    return totalCandy;
}



int main(){

    long n, x; scanf("%ld %ld\n", &n, &x);
    std::vector<candy> candyVec(n);
    for(int p = 0; p < n; p++){scanf("%ld %ld %ld", &candyVec[p].type, &candyVec[p].height, &candyVec[p].mass); candyVec[p].used = 0;}
    sort(candyVec.begin(), candyVec.end(), compCandy);

    long first  = findMaxCandy(candyVec, x, 0);
    long second = findMaxCandy(candyVec, x, 1);
    long output = (first > second) ? first : second;
    printf("%ld\n", output);

    return 0;
}
