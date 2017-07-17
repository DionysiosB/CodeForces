#include <cstdio>

int main(){

    const long H = 24;
    const long M = 60;

    long h, m, a; scanf("%ld:%ld\n%ld", &h, &m, &a);

    m += a;
    h += m / M;
    m %= M;
    h %= H;
    
    printf("%02ld:%02ld\n", h, m);

    return 0;
}
