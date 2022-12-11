#include <cstdio>
#include <algorithm>

int main(){
    int lowerBound; scanf("%d\n", &lowerBound);
    const int numMonths = 12;
    unsigned rate[numMonths] = {0};
    for(int k = 0; k < numMonths; k++){scanf("%d", rate + k);}
    std::sort(rate, rate + numMonths);
    int totalGrowth = 0, output = 0;
    while(totalGrowth < lowerBound && output < numMonths){output++; totalGrowth += rate[numMonths - output];}
    if(totalGrowth < lowerBound){output = -1;} 
    printf("%d\n", output);
    return 0;
}
