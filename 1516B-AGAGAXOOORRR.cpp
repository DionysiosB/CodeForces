#include <cstdio>
 
int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cx(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); cx ^= x;}
        puts(cx ? "NO" : "YES");
    }
}
