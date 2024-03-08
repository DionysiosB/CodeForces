#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a = (n > 52 ? (n - 52) : 1);
        n -= a; char x = 'a' + a - 1;
        long b = (n > 26 ? (n - 26) : 1);
        n -= b; char y = 'a' + b - 1;
        long c = n; char z = 'a' + c - 1;
        printf("%c%c%c\n", x, y, z);
    }

}
