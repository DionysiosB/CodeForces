#include <cstdio>
#include <vector>
 
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(-1); bool res(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p > 0 && (x < 2 * prev) && (prev < 2 * x) ){res = true;}
            prev = x;
        }
        puts(res ? "YES" : "NO");
    }
    
}
