#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long k, x; scanf("%ld %ld", &k, &x);
        printf("%ld\n", k * x + 1);
    }
    
}
