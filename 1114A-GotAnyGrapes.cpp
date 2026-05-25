#include <cstdio>

int main(){

    long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
    long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
    bool possible = (x <= a) && (x + y <= a + b) && (x + y + z <= a + b + c);
    puts(possible ? "YES" : "NO");

    return 0;
}
