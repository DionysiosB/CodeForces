#include <cstdio>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
    --a; --b;
    long m(n), h(0); while(m /= 2){++h;};
    long x(a ^ b), t(n / 2), r(h);
    while(t > x){--r; t /= 2;}
    if(r == h){puts("Final!");} else{printf("%ld\n", r);}

    return 0;
}
