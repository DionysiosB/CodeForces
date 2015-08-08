#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);

    if(n % 3 == 1){--n;}
    else if(n % 3 == 2){++n;}

    long feet = n / 36;
    long inches = (n - 36 * feet) / 3;

    printf("%ld %ld\n", feet, inches);

    return 0;
}
