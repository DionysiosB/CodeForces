#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7); bool ans(true);
        while(n--){
            long b; scanf("%ld", &b);
            if(mn < b / 2 + 1){ans = false;}
            mn = (mn < b ? mn : b);
        }		

        puts(ans ? "YES" : "NO");
    }
}

