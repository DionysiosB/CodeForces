#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int *array = new int[n*n];
    int *rowSums = new int[n];
    int *colSums = new int[n];

    for(int k = 0; k < n * n; k++){scanf("%d", array + k);}

    for(int k = 0; k < n; k++){rowSums[k] = 0; colSums[k] = 0;}

    for(int p = 0; p < n; p++){
        for(int row = 0; row < n; row++){rowSums[row] += array[row * n + p];}
        for(int col = 0; col < n; col++){colSums[col] += array[p * n + col];}
    }

    int total = 0;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(colSums[col] > rowSums[row]){++total;}
        }
    }
    
    printf("%d\n", total);
    return 0;
}
