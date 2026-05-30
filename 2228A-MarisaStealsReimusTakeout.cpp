#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long z(0), a(0), t(0);
        while(n--){
            long x; scanf("%ld", &x);
            z += (x == 0);
            a += (x == 1);
            t += (x == 2);
        }

        long cnt(z);
        long u(a < t ? a : t);
        cnt += u; a -= u; t -= u;
        cnt += (a / 3) + (t / 3);
        printf("%ld\n", cnt);
    }

}
