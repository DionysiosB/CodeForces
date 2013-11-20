#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    long numSegments; scanf("%ld\n", &numSegments);
    long *leftArray = new long[numSegments];
    long *rightArray = new long[numSegments];
    std::vector<std::pair<long,long>> segments;
    for(int k = 0; k < numSegments; k++){
        scanf("%ld %ld", leftArray + k, rightArray + k);
        segments.push_back(std::pair<long,long>(leftArray[k], rightArray[k]));
    }

    std::sort(leftArray,  leftArray + numSegments);
    std::sort(rightArray, rightArray + numSegments);

    std::pair<long,long> target = std::pair<long,long>(leftArray[0], rightArray[numSegments - 1]);
    
    long pos = -2;
    for(int k = 0; k < numSegments; k++){if(segments[k] == target){pos = k; break;}}

    printf("%ld\n", pos + 1);
    return 0;
}
