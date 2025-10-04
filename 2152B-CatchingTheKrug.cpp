#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, ra, ca, rb, cb; scanf("%ld %ld %ld %ld %ld", &n, &ra, &ca, &rb, &cb);
        long wr = (ra != rb) * (ra < rb ? rb : (n - rb));
        long wc = (ca != cb) * (ca < cb ? cb : (n - cb));
        long ans = (wr > wc ? wr : wc);
        printf("%ld\n", ans);
    }
}

