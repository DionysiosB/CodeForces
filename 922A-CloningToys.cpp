#include <cstdio>

int main(){

    long x, y; scanf("%ld %ld", &x, &y);
    puts((x == 0 && y == 1) || ((y > 1) && (x >= y - 1) && ((x - y) & 1)) ? "Yes" : "No");

    return 0;
}
