#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x; scanf("%ld", &x);
        long a(1501); printf("%ld %ld ", a - x, a); 
        for(long p = 2; p < n; p++){
            scanf("%ld", &x);
            a += x;
            printf("%ld ", a);
        }
        puts("");
    }

}
