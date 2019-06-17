#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){putchar(p & 1 ? '1' : '0');}
    puts("");

    return 0;
}
