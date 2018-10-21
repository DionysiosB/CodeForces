#include <cstdio>
#include <iostream>
#include <vector>

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n), b(n), c(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}
    
    std::vector<long> f(n, 0), g(n, 0);  //f is when p is before its right; g when it is after its right;
    
    f[0] = a[0]; g[0] = b[0];
    for(long p = 1; p < n; p++){
        f[p] = std::max(f[p - 1] + b[p], g[p - 1] + a[p]);
        g[p] = std::max(f[p - 1] + c[p], g[p - 1] + b[p]);
    }
    
    printf("%ld\n", f[n - 1]);
    
    return 0;
}
