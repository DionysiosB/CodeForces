#include <cstdio>
#include <vector>
#include <cmath>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long &x : a){scanf("%ld", &x);}
        long total(0); for(long p = 1; p < n; p++){total += std::abs(a[p] - a[p - 1]);}
        long mxd(std::max(std::abs(a[1] - a[0]), std::abs(a[n - 1] - a[n - 2])));
        for(long p = 1; p + 1 < n; p++){
            long diff = std::abs(a[p] - a[p - 1]) + std::abs(a[p + 1] - a[p]) - std::abs(a[p + 1] - a[p - 1]);
            mxd = std::max(mxd, diff);
        }
        
        printf("%ld\n", total - mxd);
    }
    
}
