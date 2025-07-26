#include <cstdio>
#include <algorithm>

int main() {

    long t; scanf("%ld", &t);
    while (t--) {
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long cnt(1e9), A(-1), B(-1), C(-1);
        for(long tstA = 1; tstA <= 2 * a; tstA++) {
            for(long tstB = tstA; tstB <= 2 * b; tstB += tstA) {
                for(long p = 0; p < 2; p++) {
                    long tstC = tstB * (c / tstB) + p * tstB;
                    long tstcnt = std::abs(tstA - a) + std::abs(tstB - b) + std::abs(tstC - c);
                    if(tstcnt < cnt){cnt = tstcnt; A = tstA; B = tstB; C = tstC;}
                }
            }
        } 

        printf("%ld\n%ld %ld %ld\n", cnt, A, B, C);
    }

}
