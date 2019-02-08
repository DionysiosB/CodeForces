#include <cstdio>

int main(){

    int x1, y1, x2, y2; scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int dx(x1 - x2), dy(y1 - y2);

    if(dx < 0){dx = -dx;}
    if(dy < 0){dy = -dy;}

    if(dx < 1){dx = 1;}
    if(dy < 1){dy = 1;}
    ++dx; ++dy;

    printf("%d\n", 2 * (dx + dy));

    return 0;
}
