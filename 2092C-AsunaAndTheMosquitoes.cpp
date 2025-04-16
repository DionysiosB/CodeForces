#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cd(0), cv(0), mx(0);
        long long s(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cd += (x % 2);
            cv += (1 - x % 2);
            mx = (mx > x ? mx : x);
            s += x;
        }
        
        printf("%lld\n", (cd && cv) ? (s - cd + 1) : mx);
        
    }
    
}
