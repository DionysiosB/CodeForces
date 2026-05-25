#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    printf("%ld\n", (m < n - m) ? (m > 0 ? m : 1) : (n - m));

    return 0;
}
