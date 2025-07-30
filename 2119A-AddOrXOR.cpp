#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x, y;
        scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
        if(a > b){printf("%ld\n", (a ^ 1) == b ? y : -1);}
        else{
            long long c0 = b - a;
            long long c1 = (b + 1) / 2 - (a + 1) / 2;
            printf("%lld\n", (y > x) ? (c0 * x) :  ((c0 - c1) * x + c1 * y) );
        }
    }
}

