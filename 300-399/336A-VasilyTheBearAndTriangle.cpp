#include <cstdio>

int main(){

    long x, y; scanf("%ld %ld", &x, &y);
    if     (x > 0 && y > 0){printf("%d %ld %ld %d\n", 0, x + y, x + y, 0);}
    else if(x < 0 && y > 0){printf("%ld %d %d %ld\n", x - y, 0, 0, y - x);}
    else if(x < 0 && y < 0){printf("%ld %d %d %ld\n", x + y, 0, 0, x + y);}
    else if(x > 0 && y < 0){printf("%d %ld %ld %d\n", 0, y - x, x - y, 0);}
    return 0;
}
