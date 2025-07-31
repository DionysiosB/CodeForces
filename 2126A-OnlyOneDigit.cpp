#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        int y(9);
        while(x){
            int d = (x % 10);
            y = (y < d ? y : d);
            x /= 10;
        }
        
        printf("%d\n", y);
    }
    
    
}
