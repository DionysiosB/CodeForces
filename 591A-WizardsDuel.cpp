#include <cstdio>

int main(){

    long l, p, q; scanf("%ld %ld %ld\n", &l, &p, &q);
    double ans = 1.0 * p * l / (p + q);
    printf("%.6lf\n", ans);

    return 0;
}
