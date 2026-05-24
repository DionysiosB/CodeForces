#include <cstdio>

int main(){

    long l, r; scanf("%ld %ld", &l, &r);
    printf("%ld\n", (r <= l + 1) ? l : 2);

    return 0;
}
