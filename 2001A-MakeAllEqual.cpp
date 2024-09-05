#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n + 1, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}
        long mxf(0);
        for(long p = 0; p < f.size(); p++){mxf = (mxf > f[p] ? mxf : f[p]);}
        printf("%ld\n", n - mxf);
    }

}
