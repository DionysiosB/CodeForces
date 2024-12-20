#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        puts(n % 33 ? "NO" : "YES");
    }
}
