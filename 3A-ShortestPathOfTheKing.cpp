#include <cstdio>
#include <iostream>

int main(){
    std::string source, dest;
    getline(std::cin, source); getline(std::cin,dest);
    int horDist, verDist; char horLet, verLet;
    
    if(source[0] < dest[0]){horDist = dest[0] - source[0]; horLet = 'R';}
    else{horDist = source[0] - dest[0]; horLet = 'L';} 

    if(source[1] < dest[1]){verDist = dest[1] - source[1]; verLet = 'U';}
    else{verDist = source[1] - dest[1];verLet = 'D';}

    int numMoves = std::max(horDist, verDist);printf("%d\n", numMoves);
    
    while(numMoves--){
        if(--horDist >= 0){std::cout << horLet;}
        if(--verDist >= 0){std::cout << verLet;}
        std::cout << std::endl;
    }
    return 0;
}
