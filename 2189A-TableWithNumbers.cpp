#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, h, l; scanf("%ld %ld %ld", &n, &h, &l);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > h && x > l){continue;}
            else if(x <= h && x <= l){++a;}
            else{++b;}
        }
        
        printf("%ld\n", (a >= b ? ((a + b) / 2) : a));
    }
    
}
