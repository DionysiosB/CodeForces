#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> heights(n,0);

    for(int p = 0; p < n; p++){scanf("%d", &heights[p]);}

    int minNew = 1001;
    int maxCur = heights[1] - heights[0];
    for(int p = 1; p < n - 1; p++){
        if(heights[p + 1] - heights[p - 1] < minNew){minNew = heights[p + 1] - heights[p - 1];}
        if(heights[p + 1] - heights[p] > maxCur){maxCur = heights[p + 1] - heights[p];}
    }

    int maxDif = maxCur;
    if(minNew > maxDif){maxDif = minNew;}

    printf("%d\n", maxDif);

    return 0;
}
