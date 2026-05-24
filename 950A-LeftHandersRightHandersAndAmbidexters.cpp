#include <cstdio>

int main(){

    long l, r, a; scanf("%ld %ld %ld", &l, &r, &a);
    long res(0);
    if(l + a <= r){res = 2 * (l + a);}
    else if(l <= r){res = 2 * r + 2 * ((a - (r - l)) / 2);}
    else if(r + a <= l){res = 2 * (r + a);}
    else if(r <= l){res = 2 * l + 2 * ((a - (l - r)) / 2);}

    printf("%ld\n", res);

    return 0;
}
