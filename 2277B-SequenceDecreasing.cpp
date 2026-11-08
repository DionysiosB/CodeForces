#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); mn = (mn < x ? mn : x);}
        printf("%ld\n", mn < n ? n : 0);
    }

}
