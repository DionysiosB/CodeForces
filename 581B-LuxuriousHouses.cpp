#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> floors(n);
    for(int p = 0; p < n; p++){scanf("%ld\n", &floors[p]);}

    std::vector<long> rightMax(n);
    long currentMax(0);
    for(int p = n - 1; p >= 0; p--){
        rightMax[p] = currentMax;
        if(floors[p] > currentMax){currentMax = floors[p];}
    }

    for(int p = 0; p < n; p++){
        long added = (floors[p] <= rightMax[p]) ? (rightMax[p] - floors[p] + 1) : 0;
        printf("%ld ", added);
    }

    return 0;
}
