#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    if(n == 1){puts("2"); return 0;}

    long a(n), b(n), c(n);
    long res(n / 2);
    b %= 2; a -= (n / 2);
    if(b){++res; a -= 2;}
    if(a){res += (a / 3); a %= 3;}
    res += (a + c + 1) / 2;
    printf("%ld\n", res);

    return 0;
}
