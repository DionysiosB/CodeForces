#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long preva(1e9), prevb(1e9), cnt(0);
        while(n--){
            long x; scanf("%ld", &x);
            if(x <= preva){preva = x;}
            else if(x <= prevb){prevb = x;}
            else{preva = prevb; prevb = x; ++cnt;}
        }

        printf("%ld\n", cnt);
    }

}
