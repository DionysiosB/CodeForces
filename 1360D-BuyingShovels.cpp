#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long res(n);
        for(long p = 1; p * p <= n && p <= k; p++){
            if(n % p){continue;}
            long cur = (n / p <= k) ? p : (n / p);
            res = (res < cur) ? res : cur;
        }
 
        printf("%ld\n", res);
    }
 
    return 0;
}
