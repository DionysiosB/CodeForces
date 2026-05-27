#include <cstdio>
 
int main() {

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, rb, cb, rd, cd; scanf("%ld %ld %ld %ld %ld %ld", &n, &m, &rb, &cb, &rd, &cd);
        long x = (rb <= rd) ? (rd - rb) : (2 * n - rb - rd);
        long y = (cb <= cd) ? (cd - cb) : (2 * m - cb - cd);
        printf("%ld\n", (x < y) ? x : y);
    }

}
