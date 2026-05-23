#include <cstdio>

int main(){
    int n, x, y; scanf("%d %d %d", &n, &x, &y);
    int clones = 0;
    double required = 1.0 * n * y / 100;
    if(x < required){clones = required - x; if(clones < required - x){clones++;}}
    printf("%d\n", clones);
    return 0;
}
