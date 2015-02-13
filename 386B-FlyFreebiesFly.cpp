#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n(0); scanf("%d", &n);
    std::vector<int> time(n,0);
    for(int k = 0; k < n; k++){scanf("%d", &time[k]);}
    int T(0); scanf("%d", &T);
    std::sort(time.begin(), time.end());

    int currentMax(0);
    for(int k = 0; k < n; k++){
        int total = 1;
        for(int m = k + 1; m < n; m++){if(time[m] <= time[k] + T){++total;} else{break;}}
        if(total > currentMax){currentMax = total;}
    }

    printf("%d\n", currentMax);

    return 0;
}
