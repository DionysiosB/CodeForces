#include <cstdio>
#include <iostream>

int main(){

    int n(0), k(0); scanf("%d %d\n", &n, &k);
    std::string slogan; getline(std::cin, slogan); 

    std::string initialMove = "LEFT";
    std::string nextMove = "RIGHT";
    int firstMoves = k - 1;
    int initialPos = 0;
    int direction = 1;

    if(n - k < k - 1){
        initialMove = "RIGHT"; 
        nextMove = "LEFT"; 
        firstMoves = n - k;
        initialPos = n - 1; 
        direction = -1;
    }

    for(int p = 0; p < firstMoves; p++){std::cout << initialMove << std::endl;}
    std::cout << "PRINT " << slogan[initialPos] << std::endl; 
    for(int p = 1; p < slogan.size(); p++){
        std::cout << nextMove << std::endl;
        std::cout << "PRINT " << slogan[initialPos + direction * p] << std::endl;
    }

    return 0;
}
