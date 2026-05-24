#include <cstdio>
#include <vector>

int main(){

    long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
    long x(-1), y(-1);
    for(long p = 0; p <= n; p += a){if((n - p) % b == 0){x = p / a; y = (n - p) / b; break;}}

    if(x < 0 || y < 0){puts("-1"); return 0;}

    long cur(1);
    while(x--){
        for(long p = 1; p <= a; p++){printf("%ld ", cur + (p % a));}
        cur += a;
    }

    while(y--){
        for(long p = 1; p <= b; p++){printf("%ld ", cur + (p % b));}
        cur += b;
    }

    return 0;
}
