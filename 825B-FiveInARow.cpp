#include<cstdio>

bool check(char mat[15][15], int row, int col) {
    int sum = 4 * 'X' + '.';
    if (mat[row][col] + mat[row][col + 1] + mat[row][col + 2] + mat[row][col + 3] + mat[row][col + 4] == sum){return true;}
    if (mat[row][col] + mat[row + 1][col] + mat[row + 2][col] + mat[row + 3][col] + mat[row + 4][col] == sum){return true;}
    if (mat[row][col] + mat[row + 1][col + 1] + mat[row + 2][col + 2] + mat[row + 3][col + 3] + mat[row + 4][col + 4] == sum){return true;}
    if (mat[row][col] + mat[row +1 ][col - 1] + mat[row +2 ][col - 2] + mat[row + 3][col -3 ] + mat[row + 4][col - 4] == sum){return true;}

    return false;
}

int main() {

    char mat[15][15];

    for (int row = 1; row <= 10; row++){scanf("%s", mat[row] + 1);}
    bool possible(false);
    for (int row = 1; row <= 10; row++){for(int col = 1; col<= 10; col++) {if(check(mat, row, col)){possible = true;}}}
    puts(possible ? "YES" : "NO");

    return 0;
}
