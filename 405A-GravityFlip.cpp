#include <cstdio>

int main(){

    const int N = 100;
    int rowCount[N + 1] = {0};

    int n(0); scanf("%d", &n);
    for(int k = 1; k <= n; k++){
        int temp(0); scanf("%d", &temp);
        for(int m = 1; m <= temp; m++){++rowCount[m];}
    }

    for(int col = 1; col <= n; col++){
        int colCount = 0;
        for(int row = 1; row <= N; row++){if(rowCount[row] >= n + 1 - col){++colCount;}}
        printf("%d ", colCount);
    }
    puts("");

    return 0;
}
