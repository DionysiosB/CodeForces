#include <cstdio>

int main(){

    long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
    long x, y; scanf("%ld %ld", &x, &y);
    long diffx = (x2 > x1) ? (x2 - x1) : (x1 - x2);
    long diffy = (y2 > y1) ? (y2 - y1) : (y1 - y2);
    bool possible = (diffx % x == 0) && (diffy % y == 0) && ((diffx / x) % 2 == (diffy / y) % 2);
    puts(possible ? "YES" : "NO");

    return 0;
}
