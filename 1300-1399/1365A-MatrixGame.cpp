#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<bool> rows(n, 1);
        std::vector<bool> cols(m, 1);

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x; scanf("%ld", &x);
                if(!x){continue;}
                rows[row] = 0; cols[col] = 0;
            }
        }

        long u(0); for(long p = 0; p < n; p++){u += rows[p];}
        long v(0); for(long p = 0; p < m; p++){v += cols[p];}
        long turns = (u < v) ? u : v;
        puts((turns % 2) ? "Ashish" : "Vivek");
    }

    return 0;
}
