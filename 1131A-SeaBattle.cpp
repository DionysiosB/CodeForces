#include <cstdio>

int main(){

    long w1, h1, w2, h2; scanf("%ld %ld %ld %ld", &w1, &h1, &w2, &h2);
    printf("%ld\n", 2 * (w1 + h1 + h2 + 2));

    return 0;
}
