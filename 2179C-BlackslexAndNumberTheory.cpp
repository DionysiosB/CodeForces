#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7), smn(1e9 + 7);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < mn){smn = mn; mn = x;}
            else if(x < smn){smn = x;}
        }
        
        long ans(smn - mn);
        ans = (ans > mn ? ans : mn);
        printf("%ld\n", ans);
    }
    
}
