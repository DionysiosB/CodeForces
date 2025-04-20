#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(2 * n + 1, 0);
        std::vector<bool> w(2 * n + 1, 1);
        for(long row = 1; row <= n; row++){
            for(long col = 1; col <= n; col++){
                long x; scanf("%ld", &x);
                w[x] = 0;
                v[row + col] = x;
            }
        }

        for(long p = 1; p <= 2 * n; p++){
            if(w[p]){v[1] = p; break;}
        }

        for(long p = 1; p <= 2 * n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
