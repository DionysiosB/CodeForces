#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7); bool evens(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mn = (mn < x) ? mn : x;
            if(x % 2){evens = false;}
        }

        puts( (mn % 2 || evens) ? "YES" : "NO");
    }

}
