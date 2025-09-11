#include<cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long a, b; scanf("%ld %ld", &a, &b);
        long ans(b - a);

        for(long x = a; x < b; x++){
            long y(0);
            for(long p = 21; p >= 0; p--) {
                if((b >> p) & 1){y ^= (1 << p);}
                else if((x >> p) & 1){y ^= (1 << p); break;}
            }
            long tst = (x - a) + (x | y) - b + 1;
            ans = (ans < tst ? ans : tst);
        }

        printf("%ld\n", ans);
    }

}
