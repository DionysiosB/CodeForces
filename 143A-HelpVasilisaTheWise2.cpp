#include <cstdio>

int main(){

    int r1,r2,c1,c2,d1,d2; scanf("%d %d\n%d %d\n%d %d\n", &r1, &r2, &c1, &c2, &d1, &d2);
    int x = ((r1 + c1 - d2)) % 2 == 0 ? ((r1 + c1 - d2) / 2) : -1 ;
    int y = ((r1 + c2 - d1)) % 2 == 0 ? ((r1 + c2 - d1) / 2) : -1 ; 
    int z = ((r2 + c1 - d1)) % 2 == 0 ? ((r2 + c1 - d1) / 2) : -1 ;
    int w = ((r2 + c2 - d2)) % 2 == 0 ? ((r2 + c2 - d2) / 2) : -1 ;

    if(x < 1 || y < 1 || z < 1 || w < 1 || x > 9 || y > 9 || z > 9 || w > 9 || x == y || x == z || x == w || y == z || y == w || z == w){puts("-1");}
    else{printf("%d %d\n%d %d\n", x,y,z,w);}
    return 0;
}
