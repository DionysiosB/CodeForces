#include <cstdio>
#include <cmath>

int main(){

    int x1, y1, x2, y2; scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);

    if(x1 == x2){
        int length = (y1 > y2) ? (y1 - y2) : (y2 - y1);
        printf("%d %d %d %d\n", x1 + length, y1, x2 + length, y2); 
    }
    else if(y1 == y2){
        int length = (x1 > x2) ? (x1 - x2) : (x2 - x1);
        printf("%d %d %d %d\n", x1, y1 + length, x2, y2 + length); 
    }
    else{
        long diagonal = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        long length = sqrt(diagonal / 2);
        double tan = (y2 - y1) / (x2 - x1);
        if((tan != 1 && tan != -1)  || 2 * length * length != diagonal){puts("-1");}
        else{printf("%d %d %d %d\n", x1, y2, x2, y1);}
    }

    return 0;
}
