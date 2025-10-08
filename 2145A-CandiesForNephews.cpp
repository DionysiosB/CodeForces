#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", (3 - n % 3) % 3);
    }
 
}
