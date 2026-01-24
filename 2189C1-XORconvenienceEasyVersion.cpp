#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld", &n);
        if(n % 2){
            printf("%ld ", n - 1);
            for(long p = 2; p < n - 2; p += 2){printf("%ld %ld ", p + 1, p);}
            printf("%ld 1\n", n);
        }
        else{
            printf("%ld ", n);
            for(long p = 2; p + 1 < n; p += 2){printf("%ld %ld ", p + 1, p);}
            puts("1");
        }
        
    }
    
}
