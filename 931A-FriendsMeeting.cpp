#include <cstdio>

int main(){

    long a, b; scanf("%ld %ld", &a, &b);
    long m = (a + b) / 2;
    long x = (m < a) ? (a - m) : (m - a);
    long y = (m < b) ? (b - m) : (m - b);
    long t = x * (x + 1) / 2 + y * (y + 1) / 2;
    printf("%ld\n", t);

    return 0;
}
