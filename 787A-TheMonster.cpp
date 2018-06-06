#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    long gcdac = gcd(a, c);
    long target = d - b;
    if((target % gcdac) != 0){puts("-1"); return 0;}

    long x(0), y(0);
    while((a * x - c * y) != target){
        if(a * x - c * y < target){++x;}
        else{++y;}
    }

    printf("%ld\n", b + a * x);

    return 0;
}
