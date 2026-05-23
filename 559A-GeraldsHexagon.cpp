#include <cstdio>

int main(){

    long a1, a2, a3, a4, a5, a6; scanf("%ld %ld %ld %ld %ld %ld\n", &a1, &a2, &a3, &a4, &a5, &a6);
    long ans = (a1 + a2 + a3) * (a1 + a2 + a3) - a1 * a1 - a3 * a3 - a5 * a5;
    printf("%ld\n", ans);

    return 0;
}
