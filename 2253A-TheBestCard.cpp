#include <cstdio>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool res(true);
        for(long p = 2; p * p <= n + 1; p++){
            if((n + 1) % p == 0){res = false; break;}
        }
        
        puts(res ? "YES" : "NO");
    }
 
}
