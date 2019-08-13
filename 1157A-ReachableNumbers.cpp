#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long s(n >= 10);
    while(n >= 10){
        s += (9 - n % 10);
        n /= 10;
    }

    s += 9;
    printf("%ld\n", s);

    return 0;
}
