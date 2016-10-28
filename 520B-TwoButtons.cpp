#include <cstdio>

int main(){

    long n, m, count(0);
    scanf("%ld %ld\n", &n, &m);
    while(n < m){(m % 2) ? (++m) : (m /= 2); ++count;}
    printf("%ld\n", count + n - m);

    return 0;
}
