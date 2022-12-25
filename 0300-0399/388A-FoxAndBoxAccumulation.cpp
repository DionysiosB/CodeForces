#include <cstdio>
#include <algorithm>

int main(){

    int n(0); scanf("%d", &n);
    int * strength = new int[n];
    bool * used = new bool[n];

    for(int k = 0; k < n; k++){scanf("%d", strength + k); used[k] = 0;}
    std::sort(strength, strength + n);
    
    int piles(0), total(0);
    for(int k = 0; k < n; k++){
        if(used[k]){continue;}
        ++piles; total = 1;
        for(int m = k + 1; m < n; m++){if(!used[m] && strength[m] >= total){++total; used[m] = 1;}}
    }

    printf("%d\n", piles);

    return 0;
}
