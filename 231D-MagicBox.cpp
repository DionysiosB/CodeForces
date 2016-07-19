#include <cstdio>

int main(){

    long x, y, z; scanf("%ld %ld %ld\n", &x, &y, &z);
    long p, q, r; scanf("%ld %ld %ld\n", &p, &q, &r);
    long a, b, c, d, e, f; scanf("%ld %ld %ld %ld %ld %ld\n", &a, &b, &c, &d, &e, &f);
    long total = a * (y < 0) + b * (y > q) + c * (z < 0) + d * (z > r) + e * (x < 0) + f * (x > p);
    printf("%ld\n", total);

    return 0;
}
