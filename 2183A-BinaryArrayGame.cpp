#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        int z(0);
        for(int p = 1; p <= n; p++){
            int x; scanf("%d", &x);
            if(p == 1 || p == n){z += x;}
        }
        puts(z > 0 ? "Alice" : "Bob");
    }
    
}
