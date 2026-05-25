#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long x(0), rank(1);
    for(long p = 0; p < n; p++){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long s = a + b + c + d;
        if(p == 0){x = s;}
        else if(s > x){++rank;}
    }

    printf("%ld\n", rank);

    return 0;
}
