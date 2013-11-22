#include <cstdio>

int main(){

    int n; scanf("%d", &n);

    const int upperLimit = 5000;
    bool present[upperLimit + 1] = {0};

    int temp(0);
    for(int k = 1; k <= n; k++){scanf("%d", &temp); present[temp] = 1;}

    int total(0);
    for(int k = 1; k <= n; k++){if(!present[k]){++total;}}

    printf("%d\n", total);
    return 0;
}
