#include <cstdio>
#include <iostream>

int main(){

    long n, sx, sy, ex, ey; scanf("%ld %ld %ld %ld %ld\n", &n, &sx, &sy, &ex, &ey);

    char horizontal = 'E'; 
    long goalX = ex - sx; 
    if(goalX < 0){goalX = -goalX; horizontal = 'W';}


    char vertical = 'N';
    long goalY = ey - sy;
    if(goalY < 0){goalY = -goalY; vertical = 'S';}

    long distX(0), distY(0);

    long t(0);
    for(t = 1; t <= n; t++){
        char temp; scanf("%c", &temp);
        if(temp == horizontal){++distX;}
        else if(temp == vertical){++distY;}
        if((distX >= goalX) && (distY >= goalY)){break;}
    }

    if(distX >= goalX && distY >= goalY){printf("%ld\n", t);}
    else{puts("-1");}

    //printf("%ld %ld %ld %ld", goalX, goalY, distX, distY);

    return 0;
}
