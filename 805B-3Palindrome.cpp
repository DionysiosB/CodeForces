#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){putchar('a' + (((p % 4) + 1) % 4 > 1));}
    puts("");

    return 0;
}
