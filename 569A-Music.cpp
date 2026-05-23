#include <cstdio>

int main(){

    long T, S, q; scanf("%ld %ld %ld\n", &T, &S, &q);

    long t(S), n(0);
    while(t < T){t *= q; ++n;}
    printf("%ld\n", n);

    return 0;
}
