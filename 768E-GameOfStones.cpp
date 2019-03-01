#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long f(0);

    while(n--) {
        long x; scanf("%ld", &x);
        long a(1), k(1);
        while(x >= a){x -= a; k = a; ++a;}
        f ^= k;
    }

    puts(f? "NO" : "YES");

    return 0;
}
