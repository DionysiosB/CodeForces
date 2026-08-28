#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    
    const int B = 1007;
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(B, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}
        long cnt(0);
        for(long p = 1; p < B; p++){cnt += p * std::min(f[p], n - f[p] + 2);}
        printf("%ld\n", cnt);
    }
 
}
