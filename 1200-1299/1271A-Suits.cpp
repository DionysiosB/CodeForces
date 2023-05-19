#include <cstdio>

int main(){

    long a, b, c, d, e, f; scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f);

    long x = a;
    long y = (b < c) ? b : c;

    long total(0);
    if(e < f){
        y = (y < d) ? y : d;
        total = f * y;
        d -= y; x = (x < d) ? x : d;
        total += e * x;
    }
    else{
        x = (x < d) ? x : d;
        total = e * x;
        d -= x; y = (y < d) ? y : d;
        total += f * y;
    }

    printf("%ld\n", total);

    return 0;
}
