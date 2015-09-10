#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);
    std::vector<std::string> board(n);

    for(int row = 0; row < n; row++){getline(std::cin, board[row]);}

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(board[row][col] == '.'){
                if((row + col) % 2){board[row][col] = 'B';}
                else{board[row][col] = 'W';}
            }
            std::cout << board[row][col];
        }
        std::cout << std::endl;
    }

    return 0;
}
