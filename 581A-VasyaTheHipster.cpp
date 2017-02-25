#include <cstdio>

int main(){

    int a, b; scanf("%d %d\n", &a, &b);

    int diff = (a < b) ? a : b;
    int after = (a + b - 2 * diff) / 2;
    printf("%d %d\n", diff, after);

    return 0;
}
