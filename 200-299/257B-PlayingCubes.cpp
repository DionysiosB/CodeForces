#include <cstdio>
#include <iostream>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    printf("%ld %ld \n", m + n - 1 - std::min(m,n), std::min(m, n));
    return 0;
}
