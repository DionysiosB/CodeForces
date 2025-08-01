#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n; scanf("%ld", &n);
        long long total(0);
        for(long p = 0; p < n; p++){
            long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
            if(b > d){total += a + (b - d);}
            else{total += (a > c ? (a - c) : 0);}
        }

        printf("%lld\n", total);
    }

}
