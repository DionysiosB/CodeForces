#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0), cmx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < cmx){++cnt;}
            else{cmx = x;}
        }
        
        printf("%ld\n", cnt);
    }
    
}
