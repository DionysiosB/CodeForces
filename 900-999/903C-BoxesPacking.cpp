#include <cstdio>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> m; 
    long mc(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); ++m[x];
        mc = (mc > m[x]) ? mc : m[x];
    }
    printf("%ld\n", mc);

    return 0;
}
