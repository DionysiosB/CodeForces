#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    const long mult = 100; //Something greater than 50;
    int n(0), k(0); scanf("%d %d\n", &n, &k);
    int *array = new int[n];

    int solved(0), penalty(0);
    for(int p = 0; p < n; p++){
        scanf("%d %d\n", &solved, &penalty);
        array[p] = mult * solved - penalty;
    }

    std::sort(array, array + n);
    int seekScore(array[n - k]), result(0);
    for(int p = 0; p < n; p++){if(array[p] == seekScore){++result;}}

    printf("%d\n", result);
    return 0;
}
