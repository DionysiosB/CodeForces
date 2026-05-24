#include <cstdio>

int main(){

    const int m = 0;
    const int M = 100;

    int x1, x2, x3; scanf("%d %d %d\n", &x1, &x2, &x3);
    int max(x1), min(x1);
    max = (max > x2) ? max : x2;
    max = (max > x3) ? max : x3;
    min = (min < x2) ? min : x2;
    min = (min < x3) ? min : x3;

    printf("%d\n", max - min);

    return 0;
}
