#include <cstdio>

int main(){

    long n, s; scanf("%ld %ld", &n, &s);
    long cnt = (s + n - 1) / n;
    printf("%ld\n", cnt);

    return 0;
}
