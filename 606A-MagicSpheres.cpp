#include <cstdio>

int main(){

    long a, b, c; scanf("%ld %ld %ld\n", &a, &b, &c);
    long x, y, z; scanf("%ld %ld %ld\n", &x, &y, &z);

    long diff(0);
    diff += (a > x) ? ((a - x) / 2) : (a - x);
    diff += (b > y) ? ((b - y) / 2) : (b - y);
    diff += (c > z) ? ((c - z) / 2) : (c - z);

    puts(diff >= 0 ? "Yes" : "No");

    return 0;
}
