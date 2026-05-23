#include <cstdio>

int main(){

    long n, m, s, p;
    scanf("%ld %ld %ld %ld", &n, &m, &s, &p);
    long d = 60 * m + s;
    long total = n * d + (n- 1) * p;
    printf("%ld\n%ld\n", total / 60, total % 60);

    return 0;
}
