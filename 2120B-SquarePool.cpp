#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        
        long n, s; scanf("%ld %ld", &n, &s);
        
        long total(0);
        for(long p = 0; p < n; p++) {
            long dx, dy, x, y; scanf("%ld %ld %ld %ld", &dx, &dy, &x, &y);
            if(dx == dy){total += (x == y);}
            else{total += (x + y == s);}
        }
        
        printf("%ld\n", total);
    }
 
}
