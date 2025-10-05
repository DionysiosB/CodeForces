#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);

        std::vector<std::vector<long> > v(2, std::vector<long>(n + 1, 0));
        std::vector<long> ds(n + 1, 0);
        long prev(0);

        for(long p = 1; p <= n; p++){
            int x; scanf("%d", &x);
            v[0][p] = v[0][p - 1] + (!x);
            v[1][p] = v[1][p - 1] + x;
            ds[p] = ds[p - 1] + (x != prev);
            prev = x;
        }


        while(q--){
            long l, r; scanf("%ld %ld", &l, &r);
            long z = v[0][r] - v[0][l - 1];
            long w = v[1][r] - v[1][l - 1];
            if(z % 3 || w % 3){puts("-1"); continue;}
            long total = (z / 3) + (w / 3) + ((ds[r] - ds[l]) == (r - l));
            printf("%ld\n", total);
        }
    }

    return 0;
}
