#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, m; scanf("%ld %ld %ld", &n, &x, &m);
        long left(x), right(x);
        while(m--){
            long ll, rr; scanf("%ld %ld", &ll, &rr);
            if(rr < left || right < ll){continue;}
            left = (ll < left) ? ll : left;
            right = (rr > right) ? rr : right;
        }

        printf("%ld\n", right - left + 1);
    }

    return 0;
}
