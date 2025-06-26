#include <cstdio>
#include <map>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++) {
            long x; scanf("%ld", &x);
            for(long u = 2; u * u <= x; u++) {
                while(x % u == 0){x /= u; ++m[u];}
            }
            if(x > 1){++m[x];}
        }

        long cnt(0), rem(0);
        for(std::pair<long, long> w : m) {
            long mult = w.second;
            cnt += mult / 2;
            rem += mult % 2;
        }

        cnt += rem / 3;
        printf("%ld\n", cnt);
    }

}
