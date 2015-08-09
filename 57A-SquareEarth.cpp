#include <cstdio>

int main(){

    int n, x1, y1, x2, y2; scanf("%d %d %d %d %d\n", &n, &x1, &y1, &x2, &y2);

    int d1(0);
    if(0 <= x1 && x1 <= n && y1 == 0){d1 = x1;}
    else if(x1 == n && 0 <= y1 && y1 <= n){d1 = n + y1;}
    else if(0 <= x1 && x1 <= n && y1 == n){d1 = 3 * n - x1;}
    else if(x1 == 0 && 0 <= y1 && y1 <= n){d1 = 4 * n - y1;}

    int d2(0);
    if(0 <= x2 && x2 <= n && y2 == 0){d2 = x2;}
    else if(x2 == n && 0 <= y2 && y2 <= n){d2 = n + y2;}
    else if(0 <= x2 && x2 <= n && y2 == n){d2 = 3 * n - x2;}
    else if(x2 == 0 && 0 <= y2 && y2 <= n){d2 = 4 * n - y2;}

    int result1 = (8 * n + d1 - d2) % (4 * n);
    int result2 = (8 * n + d2 - d1) % (4 * n);
    int result = (result1 < result2) ? result1 : result2;
    printf("%d\n", result);

    return 0;
}
