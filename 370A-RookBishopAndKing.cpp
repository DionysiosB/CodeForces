#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(){

    int r1(0), c1(0), r2(0), c2(0); scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    int rook(2); if(r1 == r2 || c1 == c2){rook = 1;}

    int bishop(2); 
    if((r1 + c1) % 2 != (r2 + c2) % 2){bishop = 0;}
    else if(r1 + c1 == r2 + c2 || r1 + c2 == r2 + c1){bishop = 1;}

    int king = std::max(std::abs(r1 - r2), std::abs(c1 - c2));

    printf("%d %d %d\n", rook, bishop, king);
    return 0;
}
