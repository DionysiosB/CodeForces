#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, sx, sy, d; scanf("%ld %ld %ld %ld %ld", &n, &m, &sx, &sy, &d);
        long bl(sx-1), br(m - sy);
        long u = bl < br ? bl : br;
        bl = n - sx; br = sy - 1;
        long v = bl < br ? bl : br;
        bool res = (u > d) || v > d;
        printf("%ld\n", res ? (n + m - 2) : -1);
    }

}
