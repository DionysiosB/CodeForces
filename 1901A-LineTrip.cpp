#include <cstdio>
#include <vector>
 
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        std::vector<long> a(n + 2, 0);
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
        a[n + 1] = x + (x - a[n]);
        
        long ans(0);
        for(long p = 1; p <= n + 1; p++){
            long diff = a[p] - a[p - 1];
            ans = (ans > diff) ? ans : diff;
        }
        
        printf("%ld\n", ans);
    }
    
}
