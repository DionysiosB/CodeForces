#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > f(2, std::vector<long>(n, 0));
        for(long row = 0; row < 2; row++){for(long col = 0; col < n; col++){scanf("%ld", &f[row][col]);}}
        for(long p = n - 2; p >= 0; p--){f[0][p] += f[0][p + 1];}
        for(long p = 1; p < n; p++){f[1][p] += f[1][p - 1];}

        long res(2e9);
        for(long p = 0; p < n; p++){
            long u = (p + 1 < n) ? f[0][p + 1] : 0;
            long v = (p > 0) ? f[1][p - 1] : 0;
            long w = (u > v) ? u : v;
            res = (res < w) ? res : w;
        }

        printf("%ld\n", res);

    }

}
