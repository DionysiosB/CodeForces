#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    n %= 4;
    puts((n == 0 || n == 3) ? "0" : "1");

    return 0;
}
