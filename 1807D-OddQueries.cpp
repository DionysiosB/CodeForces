#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        std::vector<long> a(n + 1, 0);
        long cs(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            cs += x; cs %= 2; a[p] = cs;
        }

        while(q--){
            long l, r, k; scanf("%ld %ld %ld", &l, &r, &k);
            long rep = ((r - l + 1) % 2) * (k % 2);
            puts( ((2 + cs + rep + a[r] - a[l - 1]) % 2) ? "YES" : "NO");
        }

    }

}
