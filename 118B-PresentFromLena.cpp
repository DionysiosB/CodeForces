#include <iostream>
#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    for(int row = 0; row <= 2*n ; row++){ 
        for(int col = 0; col <= 2*n; col++){
            int modRow = std::min(row, 2*n - row);
            if(col >= n - modRow && col <= n + modRow){printf("%d ", std::min(col + modRow - n, n + modRow - col));}
            else{printf("  ");}
        }
        printf("\n");
    }
    return 0;
}
