#include <cstdio>
#include <iostream>
#include <vector>

bool winState(char w, std::vector<std::string> matrix){

    if(matrix[0][0] == w && matrix[0][1] == w && matrix[0][2] == w){return 1;}
    if(matrix[1][0] == w && matrix[1][1] == w && matrix[1][2] == w){return 1;}
    if(matrix[2][0] == w && matrix[2][1] == w && matrix[2][2] == w){return 1;}

    if(matrix[0][0] == w && matrix[1][0] == w && matrix[2][0] == w){return 1;}
    if(matrix[0][1] == w && matrix[1][1] == w && matrix[2][1] == w){return 1;}
    if(matrix[0][2] == w && matrix[1][2] == w && matrix[2][2] == w){return 1;}

    if(matrix[0][0] == w && matrix[1][1] == w && matrix[2][2] == w){return 1;}
    if(matrix[0][2] == w && matrix[1][1] == w && matrix[2][0] == w){return 1;}

    return 0;

}


int main(){
    
    std::vector<std::string> game;
    std::string first;  getline(std::cin, first);  game.push_back(first);
    std::string second; getline(std::cin, second); game.push_back(second);
    std::string third;  getline(std::cin, third);  game.push_back(third);

    int numX(0), numO(0);
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(game[row][col] == 'X'){++numX;}
            else if(game[row][col] == '0'){++numO;}
        }
    }
    

    if(numX > numO + 1 || numO > numX){puts("illegal");}
    else if(winState('X', game) && winState('0', game)){puts("illegal");}
    else if(winState('X', game) && numX != numO + 1){puts("illegal");}
    else if(winState('0', game) && numX != numO){puts("illegal");}
    else if(winState('X', game) && !winState('0', game)){puts("the first player won");}
    else if(winState('0', game) && !winState('X', game)){puts("the second player won");}
    else if(numX == numO + 1 && numX < 5){puts("second");}
    else if(numX == numO){puts("first");}
    else if(numX == 5 && numO == 4){puts("draw");}

    return 0;
}
