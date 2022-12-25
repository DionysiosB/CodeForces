#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    int n(0); scanf("%d\n", &n);
    int *array = new int[n];
    for(size_t k = 0; k < n; k++){scanf("%d", array + k);}
    std::sort(array, array + n);

    printf("%d ", array[n - 1]);
    for(size_t k = 1; k < n - 1; k++){printf("%d ", array[k]);} 
    printf("%d\n", array[0]);
    
    return 0;
}
