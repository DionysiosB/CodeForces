#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, w; scanf("%ld %ld", &n, &w);
        printf("%ld\n", n - n / w);
    }
    
}
