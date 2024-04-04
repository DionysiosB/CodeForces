#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> m(n, 0);
        std::vector<long> v(n);
        long mex(0);
        for(int p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            v[p] = mex - (a < 0 ? a : 0);
            m[v[p]] = 1;
            while(m[mex]){++mex;}
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
