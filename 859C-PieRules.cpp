#include <cstdio>
#include <vector>

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    
    std::vector<std::vector<long> > res(n, std::vector<long>(2, 0));
    long total(0);
    total = res[n - 1][0] = res[n - 1][1] = a[n - 1];
    for(long p = n - 2; p >= 0; p--){
        
        long candA = a[p] + (total - res[p + 1][1]);
        long candB = res[p + 1][0];
        res[p][0] = (candA > candB) ? candA : candB;
        
        candA = a[p] + (total - res[p + 1][0]);
        candB = res[p + 1][1];
        
        res[p][1] = (candA > candB) ? candA : candB;
        total += a[p];
        
    }
    
    
    printf("%ld %ld\n", (total - res[0][0]), res[0][0]);
    
    return 0;
}
