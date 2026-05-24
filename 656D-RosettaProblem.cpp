#include <cstdio>

int main(){

    const long B = 8;
    long a; scanf("%ld", &a);
    int count(0);
    while(a > 0){count += (a % B == 1); a /= B;}
    printf("%d\n", count);

    return 0;
}
