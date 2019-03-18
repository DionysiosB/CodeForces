#include <cstdio>

int main(){

    int x1, y1, z1, x2, y2, z2; scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
    puts(((x1 ^ x2) && (y1 ^ y2) && (z1 ^ z2)) ? "NO" : "YES");

    return 0;
}
