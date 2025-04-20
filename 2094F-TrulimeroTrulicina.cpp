#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        bool shift = ((m % k) == 0);
        std::vector<std::vector<long> > f(n, std::vector<long>(m, 0));
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x = (row * m + col) % k;
                f[row][col] = 1 + ((shift * row % 2) + x) % k;
            }
        }

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){printf("%ld ", f[row][col]);}
            puts("");
        }

    }

}
