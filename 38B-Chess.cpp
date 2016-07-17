#include <iostream>
#include <vector>

int main(){

    const int n = 8;
    std::vector<std::vector<bool> > array(n, std::vector<bool>(n, 1));

    std::string pos1; getline(std::cin, pos1);
    std::string pos2; getline(std::cin, pos2);

    int rookRow = pos1[1] - '1';
    int rookCol = pos1[0] - 'a';
    for(int row = 0; row < n; row++){array[row][rookCol] = 0;}
    for(int col = 0; col < n; col++){array[rookRow][col] = 0;}


    int knightRow = pos2[1] - '1';
    int knightCol = pos2[0] - 'a';
    array[knightRow][knightCol] = 0;

    int posRow, posCol;
    for(int row = 1; row <= 2; row++){
        for(int col = 1; col <= 2; col++){
            if(row + col != 3){continue;}
            posRow = knightRow + row; posCol = knightCol + col;
            if(posRow < n && posCol < n){array[posRow][posCol] = 0;}

            posRow = knightRow - row; posCol = knightCol + col;
            if(posRow >= 0 && posCol < n){array[posRow][posCol] = 0;}

            posRow = knightRow + row; posCol = knightCol - col;
            if(posRow < n && posCol >= 0){array[posRow][posCol] = 0;}

            posRow = knightRow - row; posCol = knightCol - col;
            if(posRow >= 0 && posCol >= 0){array[posRow][posCol] = 0;}

            posRow = rookRow + row; posCol = rookCol + col;
            if(posRow < n && posCol < n){array[posRow][posCol] = 0;}

            posRow = rookRow - row; posCol = rookCol + col;
            if(posRow >= 0 && posCol < n){array[posRow][posCol] = 0;}

            posRow = rookRow + row; posCol = rookCol - col;
            if(posRow < n && posCol >= 0){array[posRow][posCol] = 0;}

            posRow = rookRow - row; posCol = rookCol - col;
            if(posRow >= 0 && posCol >= 0){array[posRow][posCol] = 0;}

        }
    }


    int total(0);
    for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){total += array[row][col];}}
    std::cout << total << std::endl;

    return 0;
}
