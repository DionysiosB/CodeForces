#include <cstdio>

int main(){

    int numRows, numCols; scanf("%d %d\n", &numRows, &numCols);

    bool *rowArray = new bool[numRows];
    for(int k = 0; k < numRows; k++){rowArray[k] = 1;}

    bool *colArray = new bool[numCols];
    for(int k = 0; k < numCols; k++){colArray[k] = 1;}

    char temp;
    for(int row = 0; row < numRows; row++){
        for(int col = 0; col < numCols; col++){
            scanf("%c", &temp);
            if(temp == 'S'){rowArray[row] = 0; colArray[col] = 0;}
        }
        scanf("\n");
    }

    int freeRows(0), freeCols(0);
    for(int k = 0; k < numRows; k++){if(rowArray[k]){++freeRows;}}
    for(int k = 0; k < numCols; k++){if(colArray[k]){++freeCols;}}
    printf("%d\n", freeRows*numCols + freeCols*numRows - freeRows*freeCols);
    return 0;
}
