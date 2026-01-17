#include <cstdio>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long z(0); bool a(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(!x){++z;}
            else if(x == 1){a = true;}
        }
        
        puts((z == 1) || (z > 1 && a) ? "YES" : "NO");
    }
 
}
