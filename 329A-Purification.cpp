#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    int *rowPoints = new int[n];int *colPoints = new int[n];
    for(int k = 0; k < n; k++){rowPoints[k] = colPoints[k] = -1;}

    for(int row = 0; row < n; row++){
        scanf("\n");
        for(int col = 0; col < n; col++){
            char temp('0'); scanf("%c", &temp);
            if(temp == '.'){rowPoints[row] = col; colPoints[col] = row;}
        }
    }

   
    bool rowPossible(1); for(int row = 0; row < n; row++){if(rowPoints[row] < 0){rowPossible = 0; break;}}
    bool colPossible(1); for(int col = 0; col < n; col++){if(colPoints[col] < 0){colPossible = 0; break;}}

    if(rowPossible){for(int row = 0; row < n; row++){printf("%d %d\n", 1 + row, 1 + rowPoints[row]);}}
    else if(colPossible){for(int col = 0; col < n; col++){printf("%d %d\n", 1 + colPoints[col], 1 + col);}}
    else{puts("-1");}

    return 0;
}
