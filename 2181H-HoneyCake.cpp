#include <cstdio>


long gcd(long a, long b){return a ? gcd(b % a, a) : b;}

int main(){

    long w, h, d; scanf("%ld %ld %ld", &w, &h, &d);
    long n; scanf("%ld", &n);

    long gw = gcd(w, n); n /= gw;
    long gh = gcd(h, n); n /= gh;
    long gd = gcd(d, n); n /= gd;

    if(n > 1){puts("-1");}
    else{printf("%ld %ld %ld\n", (gw - 1), (gh - 1), (gd - 1));}

    return 0;
}
