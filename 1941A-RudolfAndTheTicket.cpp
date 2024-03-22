#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        std::vector<long> c(m); for(long p = 0; p < m; p++){scanf("%ld", &c[p]);}

        long total(0);
        for(int p = 0; p < n; p++){
            for(int q = 0; q < m; q++){
                if(b[p] + c[q] <= k){++total;}
            }
        }

        printf("%ld\n", total);
    }

}
