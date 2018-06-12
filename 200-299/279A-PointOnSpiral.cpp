#include <cstdio>

int main(){
    
    int x(0), y(0); scanf("%d %d\n", &x, &y);

    int output(0);
    if(y <= 0 && x > y && x <= -y + 1){output = - 4 * y;}
    else if(x > 0 && y > -x + 1 && y <= x){output = 4 * x - 3;}
    else if(y > 0 && x >= -y && x < y){output = 4 * y - 2;}
    else if(x < 0 && y >= x && y < -x ){output = -4 * x - 1;}

    printf("%d\n", output);
    return 0;
}
